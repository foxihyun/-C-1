#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result1,result2,result3;
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);

	printf("%d & %d= %d \n", num1, num2, num1 & num2);
	printf("%d | %d= %d \n", num1, num2, num1 | num2);
	printf("%d ^ %d= %d \n", num1, num2, num1 ^ num2);
}
