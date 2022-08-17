/*
    example code for if else-if statement
*/

#include <stdio.h>

int main()
{
    int number = 66;
    
    if ( number == 10 )
    {
        printf( "number is equals to 10\n" );
    }
    else if ( number == 50 )
    {
        printf( "number is equal to 50\n" );
    }
    else if ( number == 100 )
    {
        printf( "number is equal to 100\n" );
    }
    else
    {
        printf( "number is not equal to 10, 50 or 100\n" );
    }

    printf( "code ends here\n" );

    return 0;
}