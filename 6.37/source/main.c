#include<stdio.h>
#include<stdlib.h>

int recursiveMaximun(int a[], int length);

int main(void)
{
	int a[] = { 20, 10, 50, 40, 70, 80, 90, 30, 60 };
	int length = sizeof(a) / sizeof(a[0]);
	int i;
	int max;

	printf("��ư}�C\n");
	for (i = 0; i < length; i++)
		printf("%d ", a[i]);

	printf("�}�C�j�p: %d\n", length);

	max = recursiveMaximun(a, length);
	printf("�}�C�̤j�Ʀr: %d\n", max);

	system("pause");
	return 0;
}

int recursiveMaximun(int a[], int length)
{
	int max;
	int i;

	for (i = 0; i < length; i++)
		printf("%d ", a[i]);
	puts("");

	if (length == 1)
	{
		return a[0];
	}
	else
	{

		max = recursiveMaximun(a, length - 1);
		printf("^ %d\n", max);
		if (a[length - 1] > max)
		{
			return a[length - 1];
		}
		else
		{
			return max;
		}
	}
}