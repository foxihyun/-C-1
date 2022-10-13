#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Convert(int num)
{
	if (num > 1) 
		Convert(num / 2);
	printf("%d", num % 2);
}

int main(void) 
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	Convert(num);

	return 0;
}