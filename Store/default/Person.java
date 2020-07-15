//Program to study
//Object Creation Process
//Refer: Note Below
//See : Person.png



class Person
{
 //attributes(data members) 
 String name;
 int age;

 //non static initializer block
 {
   age = 0;
   name = "baby";
   System.out.println("NSIB");
 } 

 //constructor
 Person() //takes no parameters, is termed as "default constructor"
 {
   System.out.println("Person()");
   age = 10; //assigns a preset value
   name = "Vikas"; //assigns a preset value
 }

 Person(int a, String n) //takes parameters, is termed as "parameterized constructor"
 {
   System.out.println("Person(int, String)");
   age = a; //assigns a parameter value
   name = n; //assigns a parameter value
 
 }

 //operations
 void display()
 {
   System.out.println("Name : " + name);
   System.out.println("Age : " + age);
 }

 //program begins here
 public static void main(String args[])
 {
   System.out.println("=================");

   Person p = new Person(); //Object of class Person
   Person p1 = new Person(3, "Anil"); //Object of class Person

   System.out.println("=================");

   p.display();
   p1.display();
 }
}//Person


/*
Object
---------
* Object is an instance of a class.
* It can store and process data. 
* In memory it is a composite block, made up of the non-static data members of the class.
* Its processing ability is defined by the non-static methods of the class.


Object Creation Process
-----------------------------
Object creation is a 3 step process, in Java.
* Memory allocation
* Execution of non static initializer block
* Execution of constructor


Memory Allocation
 In memory object is a composite block
 made up of the non-static data members
 of the class. 

Non static initializer block
 A non static initializer block is a block of code that belongs to the class.
 It has no signature.
 It is auto invoked to execute for every object created. 
 It is used to assign initial values to data members of the object.
 
Constructor
 A constructor is a special member of the class.
 It has same name as of the class and no return type specification.
 It is auto invoked to execute for every object created. 
 It is used to assign initial values to data members of the object.
 It can be classified as: 
  * Default
  * Parameterized
  The default constructor is parameterless and uses preset values to initialize the object members. 
  The parameterized constructor takes and uses parameter data to initialize the object members.

NOTE:
 A class can have multiple (default and parameterized)
 constructors to allow object initialization in multiple
 ways. 
 Such is feature is implementation of OOP concept: POLYMORPHISM

 It is termed as "Constructor Overloading". 

 
*/