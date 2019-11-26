#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int spot1, spot2, roll, total;
int a[13] = { 0 };
int main()
{
	srand(time(NULL));
	for (roll = 0; roll < 3600; roll++)
	{
		spot1 = rand() % 6 + 1;
		spot2 = rand() % 6 + 1;
		total = spot1 + spot2;
		++a[total];
	}
	printf("%s%17s\n", "Total", "Frequency");
	for (total = 2; total < 13; total++)
	{
		printf("%5d%17d\n", total, a[total]);
	}
	system("pause");
	return 0;
}