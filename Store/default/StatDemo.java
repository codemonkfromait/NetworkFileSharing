//Study of static and non static 
//Refer : Static & NonStatic Members.txt
//See : Static & NonStatic Members.png
//See : Class Initialization.png


class OnTest
{
 static int cnt; //static data member
 int x;//non static data member
 int y;//non static data member

 //constructor
 OnTest()
 {
  System.out.println("OnTest()");
  x = 10;
  y = 20;
  cnt++; //tracking the object count
 }  

 OnTest(int a, int b)
 {
  System.out.println("OnTest(int,int)");
  x = a;
  y = b;
  cnt++; //tracking the object count
 }  


 //static block
 static
 {
   System.out.println("static block of OnTest");
   cnt = 0;
 }

 //static method
 static void sfx()
 {
   System.out.println("Objects Created : " + cnt);// OnTest.cnt (cnt of the class)
 }

 //non static method
 void fx()
 {
   System.out.println("x : " + x); //this.x (x of current object)
   System.out.println("y : " + y); //this.y (y of current object)
   System.out.println("Objects Created : " + cnt);// OnTest.cnt (cnt of the class)
 }
  
}//OnTest

class StatDemo
{
 static
 {
   System.out.println("static block of StatDemo");
 }

 public static void main(String args[])
 {
   System.out.println("=====1=======");
   OnTest obj1 = new OnTest(1,2);
   System.out.println("=====2=======");  
   OnTest obj2 = new OnTest(11,22);
   System.out.println("=====3=======");  
   obj1.fx();
   obj2.fx();
   OnTest.sfx();
 }
}