//�� 5���� ������ �迭�� �Ѳ����� �Է� �޾Ƽ�, 
//Ȧ���� ¦���� �������� ����ϴ� ���α׷��� �ۼ��غ�����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int odd(int arr)
{
	if (arr % 2 == 1)
	{
		printf("%d ", arr);
		
		return 0;
	}
}

int even(int arr)
{
	if (arr % 2 == 0)
	{
		printf("%d ", arr);
		return 0;
	}
}

// �� �Լ�
int main()
{
	int i;
	int num[5];

	printf("Please input five integers:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);

	}
	printf("Odd numbers:");
	for (i = 0; i < 5; i++)
	{
		odd(num[i]);
	}
	printf("\n");
	printf("Even numbers:");
	for (i = 0; i < 5; i++)
	{
		even(num[i]);

	}
	return 0;
}