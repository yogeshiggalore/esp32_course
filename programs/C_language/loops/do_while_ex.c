/* do while example */
#include <stdio.h>

int main()
{
    int number = 10;
    do
    {
        printf("number value is %d\n", number);
        number = number - 1;
    } while (number > 5);

    printf("code ends here\n");
    return 0;
}
