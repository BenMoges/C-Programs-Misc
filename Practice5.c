#include <stdio.h> 
//Ben Moges
//CSC 150

int main()
{

	unsigned int counter; //grades to be entered next
	int grade;
	int total; //sum of grades
	
	float average; //average with a decimal

	//initialization
	total = 0;
	counter = 0; //intialize the loop counter

	//processing phase
	printf( "%s", "Enter grade, -1 to end: ");
	scanf("%d", &grade);
	
	while ( grade != -1) {
	total = total + grade;
	counter = counter + 1;
	

	printf( "%s", "Enter grade, -1 to end: ");
	scanf("%d", &grade);
	}


	if ( counter != 0) {

	average = (float) total / counter;


	printf( "Class average is %.2f\n", average);// prints results
	}
	else {
	puts( "No grades were entered");
	}
	return 0;

}


	




