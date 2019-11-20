#include <stdio.h> 
//Ben Moges
//CSC 150

int main( void )
{
	
	

	printf( "Enter two integers, and I will tell you\n" );
	printf( "the relationships they satisfy: " );

	int firstnum; //first and second to be read from user
	int secondnum;

	scanf( "%d %d", &firstnum, &secondnum ); //read two integers

	if ( firstnum == secondnum ) 
		{

	    printf( "%d is equal to %d\n", firstnum, secondnum );
	}

	if ( firstnum != secondnum ) 
	{
		printf("%d is not equal to %d\n", firstnum, secondnum );
	}

	if ( firstnum < secondnum ) 
	{
		printf("%d is less than %d\n", firstnum, secondnum);
	}
	if ( firstnum > secondnum ) 
	{
		printf("%d is greater than %d\n", firstnum, secondnum);
	}
	if ( firstnum <= secondnum ) 
{		
		printf("%d is less than or equal to %d\n", firstnum, secondnum );

	}
	if ( firstnum >= secondnum) 
{
		printf( "%d is greater than or equal to %d\n", firstnum, secondnum );
	}

}



