#include <stdio.h> 

int main( void ) 
{
	
	int integer1, integer2,sum, product, difference, quotient, remainder;

	printf( "Enter two integers\n" );
	scanf( "%d%d", &integer1, &integer2);

	sum = integer1 + integer2;
	product = integer1 * integer2;
	difference = integer1 - integer2;
	quotient = integer1 / integer2;
	remainder = integer1 % integer2;

	printf("The sum of %d and %d is %d.\n", integer1, integer2, sum);
	printf("The product of %d and %d is %d.\n", integer1, integer2, product);
	printf("The diffrence of %d and %d is %d.\n", integer1, integer2, difference);

	printf("The quotient of %d and %d is %d.\n", integer1, integer2, quotient);
	printf("The remainder of %d and %d is %d.\n", integer1, integer2, remainder);




}
