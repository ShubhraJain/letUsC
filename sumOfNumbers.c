/*#include <stdio.h>
int main(){
 int x=5;
if ( x < 10 )
  printf( "<10" );
else if ( x % 2 == 0 ) 
  printf( "even" );
else if ( x >= 5)
  printf(">=5" );
else
  printf( "odd and <=5");
for (;;);
}
*/

#include<stdio.h>

int main() {
   int a, b = 0; // Declares the variables
   printf("Enter the number: "); // Ask the user for input
   scanf("%d", &a); // Stores the input in the variable
   do {
      if (a != -1) { // Checks for the condition that if the entered number is -1, 
                     // stop the addition of further numbers 
         b = b + a;  
         scanf("%d", &a); // Ask for next number in the sequence
      } 
   }while (a != -1); // 
   printf("Sum of the given numbers is: %d \n", b);
}
