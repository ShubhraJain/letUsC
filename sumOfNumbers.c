/*
Program that reads numbers which are in the range 0 to 100,  till it encounters -1. 
Print the sum of all the integers that you have read before you encountered -1

INPUT:
A sequence of integers separated by whitespace. There may be other integers following -1.

OUTPUT:
Sum of all integers in the sequence before you encounter -1. Any integer that is input after -1 in the sequence should be ignored.
*/

#include<stdio.h>

int main() {
   int a = 0, b = 0; // Declares the variables
   printf("Enter the number: "); // Ask the user for input
   while (a != -1){ // Continues to exceute the inner statements until -1 is encountered  
      b = b + a;   // Add number in the sequence
      scanf("%d", &a);
   }  
   printf("Sum of the given numbers is: %d \n", b); // prints the sum
}
