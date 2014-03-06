/* Program for finding largest number among the 3 given numbers*/

#include <stdio.h>
int main() {
  int a = 10; // Initializing the variable
  int b = 20; // Initializing the variable
  int c = 30; // Initializing the variable
  if (a > b) { // Checks if a is greater than b
     if (a > c) { // Checks if a is also greater than c
           printf ("a is largest\n"); 
     }
  }
  if (b > c) {
     if (b > a) {
        printf ("b is largest\n"); 
     }
  } else printf("c is largest\n");
}
