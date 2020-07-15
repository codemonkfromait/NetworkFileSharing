/*
Singleton Class
----------------------
A singleton class is a class that can 
be instantiated once.
i.e. Its only one object can be created.


To make a class, Singleton:
* Hide the constructors, so that normal object creation approach gets blocked.
* Provide a factory method that creates one object of class and returns the same everytime.

FYI : A singleton class ideally represents
some shared resource that is one for the 
application.
*/


class Ston
{
 private int x,y; //say a resource
 private static Ston ref;

 static
 {
  ref = null;
 }

 private Ston()
 {
  System.out.println("Ston()");
  x = 10;//resource
  y = 20;//initialization
 }

 //operations on the resource
 void display()
 {
  System.out.println(x + " " + y);
 }   

 void increment()
 {
  x++;
  y++;
 }

 //factory method
 static Ston getObject()
 {
  System.out.println("Ston getObject()");
  if(ref == null)
    ref = new Ston();
  return ref;
 } 
}//Ston

class UseSingleton
{
 public static void main(String args[])
 {
  Ston s1 = Ston.getObject();
  Ston s2 = Ston.getObject();

  s1.increment();
  s1.display();
  s2.display();


  if(s1 == s2)
    System.out.println("Two reference refer to the same object");
  else
    System.out.println("Two reference refer to the different objects");

 }//main
}//UseSingleton