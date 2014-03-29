/*Given a  sequence A of N positive integers, write a program to find the number of pairs (A[i], A[j]) such that i < j and A[i]A[j] > A[j]A[i] (A[i] raised to the power A[j] > A[j] raised to the power A[i]).
 
INPUT: 
Line 1 contains N.
Line 2 contains a sequence of N integers, separated by whitespace.
 
OUTPUT: 
A single integer representing the number of required pairs.
 
CONSTRAINTS: 
The inputs will satisfy the following properties. It is not necessary to validate the inputs.
1 <= N <= 30
0 <= A[i] <= 8

The input sequence can have repetitions and the count must reflect that.
*/

#include<stdio.h>
int power(int x, int y) {
    int result = x;
    if(y == 0) return 1;
    if(x < 0 || y < 0) return 0;
    for(int i = 1; i < y; ++i)
	result *= x;
    return result;
}
int main() {
     int numOfIntegers;
     scanf("%d", &numOfIntegers);
     int nums[numOfIntegers];
     for(int i = 0; i < numOfIntegers; i++) {
         scanf("%d", &nums[i]);
     }
     int count = 0; // Count of required pairs
     for(int i = 0; i < numOfIntegers - 1; i++) {
	 for(int j = 0; j < numOfIntegers; j++) {
	     if(i > j) {
		 j++;
	     } else {
		 if(power(nums[i], nums[j]) > power(nums[j], nums[i])) {
                    count += 1;
		 }
	     }
	 }
     }
     printf("Count: %d", count);
}

