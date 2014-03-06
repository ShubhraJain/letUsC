#include <stdio.h>
int main() {
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;
  if (a > b) {
     if (a > c) {
        if (a > d) {
           printf ("a is largest");
        }  
     }
  }
  if (b > c) {
     if (b > a) {
        printf ("b is largest"); 
     }
  } else printf("c is largest");
}
