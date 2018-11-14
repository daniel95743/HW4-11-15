#include<stdio.h>
#include<stdlib.h>
#define size 10

int main(void)
{ 
	int a[size] = {2,6,4,8,10,12,89,68,45,37};
	int i,max,next,t;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (next=1;next<size-1;next++)
	{
		for (i = next-1; i < size-1; i++)
		{
			if (a[i] > a[i +1])
			{
				max = a[i];
				a[i] = a[i + 1];
				a[i + 1] = max;
			}
		}
		if (a[0] < a[1] && a[2] < a[3] && a[4] < a[5] && a[6] < a[7] && a[8] < a[9])break;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
