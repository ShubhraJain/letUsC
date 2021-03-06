/*Write a program to read a sequence of N integers and print the number that appears the maximum number of times in the sequence. 

INPUT
Input contains two lines. First line in the input indicates N, the number of integers in the sequence. Second line contains N integers, separated by white space.

OUTPUT
Element with the maximum frequency. If two numbers have the same highest frequency, print the number that appears first in the sequence.

CONSTRAINTS
1 <= N <= 10000
The integers will be in the range [-100,100].#include<stdio.h>
*/
#include<stdio.h>
#include<stdbool.h>
int main() {
    int numOfIntegers; // Gives the count of integers to be compared
    scanf("%d", &numOfIntegers);
    int nums[numOfIntegers]; // Integers to be compared 
    for(int i = 0; i < numOfIntegers; i++) {		      
	scanf("%d", &nums[i]);
    }
    int *p; 
    p = nums;
    int count = 0; // count of times a number is repeated
    int foundElements[numOfIntegers]; // Contains the integer that have been already searched
    int mostFreqElement = nums[0];
    int maxOccurrence = 0;
    int numFound = 0;
    while(p != &nums[numOfIntegers - 1]) {
	bool isPFound = false;
	for(int i = 0; i < numFound; i++) {
	    if(*p == foundElements[i]) {
		isPFound = true;
		break;
	    }   
	}   
	if(isPFound) {
	    p++;
	} else {
	    int *q = p + 1;
	    while(q != &nums[numOfIntegers - 1]) {
		if(*p == *q) {
		    count = count + 1; 
		}
		q++;
	    }
	    foundElements[numFound] = *p; // Adding element in the array
	    numFound = numFound + 1;
	    if(count > maxOccurrence) {
		maxOccurrence = count;
		mostFreqElement = *p; 
	    }
	}
    }
    printf("%d", mostFreqElement);
    return 0;
}
