//Ben Moges 
//CSC 150
#include <stdio.h> 


int main( void ) 
{
	
	int integer1, integer2, n ,sum, product, difference, quotient, remainder;
	

	printf( "Enter two integers\n" );
	scanf( "%d%d", &integer1, &integer2);


	printf("1 sum\n");
	printf("2 product\n");
	printf("3 differnce\n");
	printf("4,quotient\n");
	printf("5 remainder\n");
	printf("6 Escape\n");
	

	scanf("%d,&n");
switch(n)
{
	case 1:
	printf("Enter two integers\n");
	scanf("%d%d, &integer1, &integer2);
	sum = integer1 + integer2;
	printf("%d",sum);
	break;


	case 2:
	product = integer1 * integer2;
	printf("%d",product);
	break;


	case 3:
	difference = integer1 - integer2;
	printf("%d",difference);
	break;
	

	case 4:
	quotient = integer1 / integer2;
	printf("%d",quotient);
	break;

	case 5:
	remainder = integer1 % integer2;
	printf("%d",remainder);
	break;

	case 6:
	printf("Good bye");
	break;

	default:
	printf("unkown input");
	break;


	
	
}	



}
