/* switch statement example */

#include <stdio.h>
int main()
{
    int number = 65;

    switch (number)
    {
        case 10:
            printf("number is equals to 10\n");
            break;
        case 50:
            printf("number is equal to 50\n");
            break;
        case 100:
            printf("number is equal to 100\n");
            break;
        default:
            printf("number is not equal to 10, 50 or 100\n");
            break;
    }

    printf("code ends\n"); 
    return 0;
}