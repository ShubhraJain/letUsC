/*
Write a program that reads an MxN matrix A and prints its elements in spiral order.
You should start from the element in the 0th row and 0th column in the matrix and proceed in a spiral order as shown below.

INPUT:
First line contains two integers M and N separated by whitespace. The next M lines contain elements of matrix A, starting with the topmost row. Within each row, the elements are given from left to right.

OUTPUT:
Elements of the matrix printed in a spiral order. All the elements should be separated by whitespace.

CONSTRAINTS:
1 <= M, N <= 5.
Elements in the matrix will be in the range [-100,100]
*/

#include<stdio.h>
int main() {
    setbuf(stdout, NULL);
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int nums[rows][cols];
    for (int i = 0; i < rows; i ++) {
	for (int j = 0; j < cols; j++) {
	    scanf("%d", &nums[i][j]);
	}
    }
    int rowsIterated = 0; // Count of rows that have been traversed at given point
    int colsIterated = 0; // Count of cols that have been traversed at given point
    int nextDirection = 1;
    int count = 0; // Count of elements iterated
    int startPoint = 0; // Point where next traversal starts once a round is completed
    int round = 0; // count of complete round
    while(count < rows*cols) {
	if(nextDirection > 4) {
	    nextDirection = nextDirection % 4;
	}
	if(nextDirection == 1) {
	    for(int i = startPoint; i < cols - round; i++) {
		if(i > 0) {
		    printf(" ");
		}
	        printf("%d", nums[startPoint][i]);
		count++;
	    }
	    rowsIterated += 1;
	    nextDirection += 1;
	    startPoint += 1;
	}else if(nextDirection == 2) {
	    int j = cols - round - 1;
	    for(int i = startPoint; i < rows - round; i++) {
		printf(" ");
		printf("%d", nums[i][j]);
		count++;
	    }
	    colsIterated += 1;
            nextDirection += 1;
	}else if(nextDirection == 3) {
	    for(int i =(cols - round - 2); i >= round; i--) {
		printf(" ");
		printf("%d", nums[rows-round - 1][i]);
		count++;
	    }
	    rowsIterated += 1;
	    nextDirection += 1;
	}else if(nextDirection == 4){
	    for(int i = (rows - round - 2); (i >= startPoint) ; i--) {
		printf(" ");
		printf("%d", nums[i][round]);
		count++;
	    }
	    nextDirection += 1;
            colsIterated += 1;
	    round += 1;
	}
   }
}
