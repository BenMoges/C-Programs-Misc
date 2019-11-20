//Ben Moges 
//CSC 150
//creating and using a programmer defined function
#include <stdio.h> 

int square(int y); //function prototype


int main(void) 
{
	for (int x =1;x <= 10; ++x) {
		printf("%d ", square(x));//call

	}

puts("");
}


int square(int y)//argument
{
	return y * y;// returns the square of y as an int
}
	
