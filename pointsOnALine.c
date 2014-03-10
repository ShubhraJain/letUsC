/*Given three points (x1, y1), (x2, y2) and (x3, y3) , write a program to check if all the three points fall on one straight line.

INPUT:
Six integers x1, y1, x2, y2, x3, y3 separated by whitespace.

OUTPUT:
Print “Yes” if all the points fall on straight line, “No” otherwise.
*/

#include <stdio.h>
#include <math.h>

int main() {
   int x1, y1; 
   int x2, y2;
   int x3, y3;
   scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
   
   if ((x2-x1)==0 && (x3-x2)==0) {
      printf("Yes");
   } else {
      if (fabs((y2-y1+0.0)/(x2-x1) - (y3-y2+0.0)/(x3-x2)) < 0.00001) {
          printf("Yes");
      } else printf("No");
   }
   return 0;
}
