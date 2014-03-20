/* WAP that reads an NxN square matrix M that calculates the sum of the elements in individual rows, individual columns and the two main diagonals. Among these sums, print the largest.

 Consider the following matrix of order 3x3:

 1 10 13
 2 14 12
 3 9 8

 The row sum values are 1+10+13=24, 2+14+12=28 and 3+9+8=20. The column sum values are 1+2+3=6, 10+14+9=33 and 13+12+8=33. The diagonal sums are 1+14+8=23 and 13+14+3=30. The expected output is maximum among these sums, which is 33.
  
 INPUT:
 First line contains a value N representing the dimension of the input matrix M, followed by N lines, each line representing a row of the matrix. Within each row, N values are given and are separated by whitespace.

 OUTPUT:
 A value which is the maximum among  N row sums, N column sums and the two main diagonal sums in M.

 CONSTRAINTS:
 The entries in M are integers.
 1<=N<=100
 -100 <= Mij <= 100
 */

#include<stdio.h>
int main() {
   int dimension;
   scanf("%d", &dimension);
   int nums[dimension][dimension];
   for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++) {
	    scanf("%d", &nums[i][j]);
	}
   }
   int sum = 0;
   int sums[2 * dimension + 2];
   int index = 0;
   // Sum of individual columns
   for(int i = 0; i < dimension; i++) {
       for(int j = 0; j < dimension; j++) {
	   sum = sum + nums[j][i];
       }
       sums[index] = sum;
       index = index + 1;
       sum = 0;
   }
   // Sum of individual rows
   for(int i = 0; i < dimension; i++) {
       for(int j = 0; j < dimension; j++) {
	   sum = sum + nums[i][j];
       }
       sums[index] = sum;
       index = index + 1;
       sum = 0;
   }
   // Sum of one diagonal
   for(int i = 0, j = 0; i < dimension && j < dimension; i++, j++) {
       sum = sum + nums[i][j];
   }
   sums[index] = sum;
   index = index + 1;
   sum = 0;
   // Sum of other diagonal
   for(int i = 0, j = (dimension - 1); i < dimension && j >= 0; i++, j--) {
       sum = sum + nums[i][j];
   }
   sums[index] = sum;
   // Finding the maximum value
   int max = sums[0];
   for(int i = 1; i < (2 * dimension + 2); i++) {
       if(sums[i] > max) {
	   max = sums[i];
       }
   }
   printf("%d", max);
}
