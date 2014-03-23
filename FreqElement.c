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
