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
     int mod = 0; // Declaring the mod variable that stores value of the mod calculation
     int sum = 0; // Declaring sum which stores the sum of the digits
     while (number > 0) { 
        mod = number % 10; // Calculating the mod
        sum = mod + sum; // Calculating the sum
        number = number / 10; // Dividing the number so that digit being added to sum is no longer part of the number
     } 
     while (sum >= 10){ // Checking if sum is still 2 or more digits longer 
        sum =  (sum / 10) + (sum % 10); // Adding the digits of sum
     }
     printf("%d", sum); 
 } 
