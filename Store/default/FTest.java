/*
Final Variables / Data Members
----------------------------------
Java allows variables or data members
to be declared as "final".
Being final, the data member or variables
can be assigned once only. After assignment
they can be used as "read only".


FYI:
When a data member is set as final,
then it can assigned once in a non
static initializer block or in a 
constructor (not in both) and never
in any method. It can be used in the
methods for reading only.

*/

class FTest
{
 final int x; //final data member

 FTest()
 {
   System.out.println("FTest()");
   x = 10;//preset value
 }

 FTest(int var) 
 {
   System.out.println("FTest(int)");
   x = var;//parameter value
 }
 
 void fx()
 {
   //x++; cannot assign in a method
   System.out.println("x : "+ x);
 }

 public static void main(String args[])
 {
   final int q; //local variable
   q = 10; //assign once
   //a++; not allowed
   System.out.println("q : " + q);//read only usage

   final FTest obj1 = new FTest();   
   final FTest obj2 = new FTest(20);   
   
   obj1.fx(); 
   obj2.fx();

   //obj1 = obj2;//not allowed as obj1 is final
   //obj2 = obj1;//not allowed as obj1 is final

 }//main
}//FTest