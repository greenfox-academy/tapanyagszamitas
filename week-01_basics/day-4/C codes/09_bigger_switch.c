#include <stdio.h>
#include <stdlib.h>

/*
write a program that decides which number is bigger
use switch-statement
*/

int main()
{
    int num1;
    int num2;

    num1 = 85;
    num2 = 96;

    switch( num1 < num2 )
    {


    case 0: printf("%d is bigger", num1);
    break;

    case 1: printf("%d is bigger", num2);
    break;
    }

    return 0;
}
