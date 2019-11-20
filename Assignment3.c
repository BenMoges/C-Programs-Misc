//Ben Moges 
//CssSC 150
#include <stdio.h> 
//Pre/postincrrementing
int main( void ) 
{
	int i;
	int user1;
	
	printf("Enter a number\n", user1);
	scanf("%d",&user1);
	
	for (i = 0; i<=user1; i++)

		printf("%u\n", i);
		
	for (i = 0; i<=user1; ++i)
		printf("%u\n",++i);

	return 0;

	}
