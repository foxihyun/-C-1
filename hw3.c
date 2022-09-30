#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    for (int i = 0; i < 5; i++)
    {
        for (int k = i; k < 4 ; k++)
        {
            printf(" ");
        }
        for (int k = 0; k <= (i *2); k++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}