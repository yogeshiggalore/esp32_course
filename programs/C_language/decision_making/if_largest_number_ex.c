/* include standard header */
#include <stdio.h>

int main()
{
	int number_1 = 6;
	int number_2 = 45;
	int number_3 = 25;

	if ( number_1 > number_2 && number_1 > number_3 )
	{
		printf( "%d is largest\n", number_1 );
	}
	
	if (number_2 > number_1 && number_2 > number_3)
	{
		printf( "%d is largest\n", number_2 );
	}
	
	if ( number_3 > number_1 && number_3 > number_2 )
	{
		printf( "%d is largest\n", number_3 );
	}
	
	if ( number_1 == number_2 && number_1 == number_3 )
	{
		printf( "All are equal\n" );
	}

	printf( "code ends here\n" );
	return 0;
}