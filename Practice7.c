//Ben Moges 
//CssSC 150
#include <stdio.h> 
//Pre/postincrrementing
int main( void ) 
{
	
	int b;
	
	b = 8; //preincrement
	printf("%d\n", b);
	printf("%d\n", ++b);//will print 8 then preincrement
	printf("%d\n", b);//prints 9

	b = 8; //postincrement
	printf("%d\n", b);
	printf("%d\n", b++); //will rint 8 then postincrement
	printf("%d\n", b); // prints 9


	return 0;

	}
