/*
Digital root (also called repeated digital sum) of a number is a single digit value obtained by an iterative 
process of summing digits. Digital sum of 65536 is 7, because 6+5+5+3+6=25 and  2+5 = 7. Write a program that 
takes an integer as input and prints its digital root.

INPUT:
A single integer N

OUTPUT:
Digital root of the number N
*/

#include <stdio.h>
 int main() {
     int number;
     scanf("%d", &number);
     int mod = 0;
     int sum = 0;
     while (number > 0) {
        mod = number % 10;
        sum = mod + sum;
        number = number / 10;
     }
     while (sum >= 10){ 
        sum =  (sum / 10) + (sum % 10);
     }
     printf("%d", sum);
 }
