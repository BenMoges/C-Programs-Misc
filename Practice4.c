#include <stdio.h> 
//Ben Moges
//CSC 150

int main()
{

	unsigned int counter; //grades to be entered next
	int grade;
	int total; //sum of grades
	int average;

	//initialization
	total = 0;
	counter = 1; //intialize the loop counter

	//processing phase
	while ( counter <=10) {
	printf( "%s", "Enter grade: ");
	scanf("%d", &grade);
	total = total + grade;
	counter = counter + 1;
	}

	average = total / 10;

	printf( "Class average is %d\n", average);// prints results

	return 0;

}


	




