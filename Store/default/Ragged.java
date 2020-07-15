/*
Ragged Array
A ragged array is a two (multi) dimensional 
array, rows of which can have varying sizes
for the columns.

It is created in two steps:
 * Row creation
   int ragged[][] = new int[3][ ];
 * Column creation
   ragged[0] = new int[2];
   ragged[1] = new int[4];
   ragged[2] = new int[3];
 
It can be a replacement to rectangular
matrices that take up many elements with
zero values.

It is processed like a two dimensional array.
*/

import java.util.Random;

class Ragged
{

 public static void main(String args[])//program entry point
 {
   //ragged array:

   //row creation
		 
   int ragged[][] = new int[3][];
   //column creation
   ragged[0] = new int[2];
   ragged[1] = new int[4];
   ragged[2] = new int[3];       

   Random rnd = new Random(); //random number generator
   int i, j;

   //initialize
   for(i =0; i< ragged.length; i++)
     for(j =0; j < ragged[i].length; j++)
        ragged[i][j] = rnd.nextInt(100);


   //display
   for(i =0; i< ragged.length; i++)
   {
     System.out.println();
     for(j =0; j < ragged[i].length; j++)
        System.out.print(ragged[i][j] + " ");
   }
 }//main

}//Ragged