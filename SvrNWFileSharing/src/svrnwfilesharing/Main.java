package svrnwfilesharing;

public class Main 
{
  public static void main(String[] args) 
  {
    StoreManager smgr = new StoreManager();
    
    try
    {
      int pno = 8998;
      Server svr = new Server(pno);
        
    }
    catch(Exception ex)
    {
      System.out.println("Err : "+ ex);
    }
  }

}
