#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* fptr = &arr2[0];
	int* bptr = &arr1[0];
	int i = 0, temp = 0;
	printf("arr1 :");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2 :");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n\n");

	for (i = 0; i < 6; i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr++;
	}

	printf("after swap\n");
	
	printf("arr1 :");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2 :");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;

}