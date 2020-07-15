//Demonstration of class, object and this reference.
//Refer : ClassObjectThis.txt
//See : Time.png
//Analyze the code

class Time
{
  //attributes
  int h,m,s;  

  //operations

  //void setTime(Time this, int a, int b, int c)
  void setTime(int a, int b, int c)
  {
    //Shadowing is the hiding of a member variable
    //due to presence of a local variable with same
    //name
    //Due to shadowing all the usages of that name 
    //get mapped with the local variable
    //And the member variable remains unused.

    int h;
    h = a; //h = a;
    this.h = a;//explicit application of "this" to overcome shadowing
    m = b; //this.m = b;
    s = c; //this.s = c;
  }

  void displayTime()
  {
    System.out.println(h + ":" + m + ":" + s);
  }

  public static void main(String args[])
  {
    //Time is a class, a datatype.
    //Instantiate it for use. 
    Time t = new Time();

    //method invokation
    t.setTime(1,2,3);  // setTime(t,1,2,3);
    t.displayTime();

  }//main


}//Time