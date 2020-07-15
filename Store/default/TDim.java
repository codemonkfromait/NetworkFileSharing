//Two Dimensional Array
//interpret the code and comments
//refer : the note below
//see : TDim.png

import java.util.Random;

class TDim
{
 public static void main(String args[])
 {
   int mat[][] = new int[3][4];

   int i,j;
   Random rnd = new Random();

   //initialize
   for(i=0; i < mat.length; i++)
     for(j=0; j< mat[i].length; j++)
       mat[i][j] = rnd.nextInt(100);//assign a random int in range 0-99 to mat[i][j] 


   //display
   for(i=0; i < mat.length; i++)
   {
     System.out.println();//skip a line
     for(j=0; j< mat[i].length; j++)
       System.out.print(mat[i][j] + " ");
   }
   
 
   //swap row1 and row2
   int temp[];
   temp = mat[1];
   mat[1] = mat[2];
   mat[2] = temp;

   
   //display
   System.out.println();//skip a line
   for(int row[] : mat)
   {
     System.out.println();//skip a line
     for(int col : row)
       System.out.print(col + " ");
   }
  
 }//main
}//TDim

/*
In Java, an 2 dimensional array is a fixed sized collection of homogenous values.
It is dynamically allocated ( in the heap segment of RAM ) using the new statement.
It gets a clear allocation.

The declaration statment :
   int mat[][] = new int[3][4];

int mat[][] declares a reference to a 2 dimensional integer array.
new int[3][4] allocates an 3 int arrays of 4 elements each in heap segment of RAM.


Alternate matrix declation method
------------------------------------
A matrix initializer can be used for
direct matrix allocation and data assignment.

int mat[][] = {{1,2,3}, {4,5,6}};

*/