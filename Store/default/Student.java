//Program to study : Arrays of secondary type
//Read the note below.
//See : Student.png


class Student
{
 //data members
 int rno;
 String name;

 //Constructor
 Student()//default
 {
  System.out.println("Student()");
  rno = 10; //preset data
  name = "Anil";//preset data
 }

 Student(int r, String n)//parameterized
 {
  System.out.println("Student(int, String)");
  rno = r; //parameter data
  name = n;//parameter data
 }

 void display()
 {
  System.out.println(rno + " " + name);
 } 

 public static void main(String args[])
 {
  //Create array of secondary type
  Student arr[] = new Student[3];
  //Create and associate objects with the array elements
  arr[0] = new Student(1 , "Manoj");
  arr[1] = new Student();
  arr[2] = new Student(5 , "Buddy");

  //use
  int i;
  for(i =0; i< arr.length; i++)
    arr[i].display(); 
  
 }//main
 
}//Student


/*
An array is a collection of homogenous data.

Java allows declaration of arrays of
primary and secondary type.

Syntax:
 datatype arr[] = new datatype[size]

Example
 int arr[] = new int[3];
 Student arr[] = new Student[3];

FYI:
 When an array is of primary type or String
 then the array elements are values of that
 type.

 When an array is of secondary type then
 the array elements are references and not
 objects of secondary types.

 It is required to explicitly create objects
 of the secondary type and associate them with
 the array elements (that are references).

TIP:
 If objects of a class are grouped in
 an array, then group processing and 
 application of algorithms becomes possible.

*/