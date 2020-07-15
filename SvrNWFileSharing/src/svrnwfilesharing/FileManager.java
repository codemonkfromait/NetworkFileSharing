package svrnwfilesharing;

import java.io.BufferedReader;
import java.util.*;
import java.io.*;


//Singleton : one instance 
public class FileManager 
{
  private static FileManager ref;
  private HashMap<String, LinkedList<Page>> memoryMap;
  private final int THRESHOLD = 3;

  static
  {
    ref = null;
  }
  
  public static FileManager getObject()
  {
    if(ref == null)
      ref = new FileManager();
    return ref;
  }
  
  private FileManager()
  {
    memoryMap = new HashMap<String, LinkedList<Page>>();
    for(String aStore : StoreManager.getStoreMap().keySet())
      memoryMap.put(aStore, new LinkedList<Page>());
  }
  
  public void addToMemoryMap(String aStore)
  {
    memoryMap.put(aStore, new LinkedList<Page>());
  }
  
  public void deleteFromMemoryMap(String aStore)
  {
    memoryMap.remove(aStore);
  }
  
  //runs concurrently
  public LinkedList<String> search(String subStore, String fileName)
  {
    //hash
    fileName = fileName.toUpperCase();//GRAPH <---graph , 1<---1
    char temp = fileName.charAt(0);//G, Others
    String keyword;
    if(temp >= 'A' && temp <='Z')
      keyword = String.valueOf(temp);
    else
      keyword = "Others";
    
    LinkedList<Page> memoryQ = memoryMap.get(subStore);
    if(memoryQ == null)
      return null;
              
    Page p = null;
    for(Page current : memoryQ)
    {
      if(current.keyword.equals(keyword))
      {
        p = current;
        break;
      }
    }
    
    //for catching the matches
    LinkedList<String> matches;
    if(p != null)
    {
      //find the fileName in Page
      //compose search result
      matches = p.find(fileName);
      if(matches.size() > 0)
        p.frequency++;
    }
    else 
    {
      //load a new Page
      p = new Page(subStore, keyword);      
      //find the fileName in Page
      matches = p.find(fileName);      
      if(matches.size() > 0)
      {
        p.frequency++;
        //let the Page replace the LFU element of Q
        pageReplace(memoryQ, p);
      }
      else
      {//not found in Page (index) (Substore)
        return null;
      }
    }    
    //return search result
    
    return matches;
  }
  
  
  void pageReplace(LinkedList<Page> memoryQ, Page p)
  {//LFU
    int i;
    int total;
    total = memoryQ.size();
    if(total < THRESHOLD)
      memoryQ.add(p);
    else
    {//replace
      int min, curr;
      min =  0;
      for(i = 1; i < THRESHOLD; i++)
      {
        if(memoryQ.get(i).frequency < memoryQ.get(min).frequency)
        {
          min = i;
        }
      }
      memoryQ.remove(min);
      memoryQ.add(p);
    }
  }
  
  class Page
  {
    String subStore;
    String keyword;
    int frequency;
    LinkedList<String> index;
    
    Page(String subStore, String k)
    {
      this.subStore = subStore;
      keyword = k;
      frequency = 0;
      index = IndexManager.readIndex(subStore, keyword);
    }
    
    LinkedList<String> find(String fileName)
    {
      LinkedList<String> matches = new LinkedList<String>();
      for(String aFile : index)
      {
        //match possiblities
        //precise match 
        //substring match
        //stemming : Porters algorithm eating, eats, ate --> eat
        //KMP : pattern match
        
        if(fileName.contains(aFile) || aFile.contains(fileName))
          matches.add(aFile);
      }//for
      return matches;
    }
  }
}//FileManager
