/*
    Simple if statement example in C language
*/

/* include standard io headers */
#include <stdio.h>

int main()
{
    int number = 2;

    /* check if given number is even number */
    if( number % 2 == 0 )
    {
        printf( "%d is even number\n", number );
    }

    printf("main code ends here\n ");

    return 0;
}

