/* 
Write a program to print all the factors of a positive integer A.

INPUT:
A single integer A

OUTPUT:
Factors of the number A, in ascending order, separated by whitespace. 1 and A are also factors of A.
*/

#include<stdio.h>

 int main() {
   int number;
   scanf("%d", &number);
   for (int i = 1; i <= number; i++) {
      if ((number % i)== 0) {
         printf("%d ", i);
      }
   }
   return 0;
 }
