/* 
    if else code example 
*/

/* include standard headers */
#include <stdio.h>

int main()
{
    int number = 2;
    
    if ( number % 2 == 0 )
    {
        printf( "%d is even number\n", number );
    }
    else
    {
        printf( "%d is odd number\n", number );
    }

    printf( "code ends here\n" );

    return 0;
}