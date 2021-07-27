#include<stdio.h>
void main()
{
	int arr[9];
	int i, j, count;
	count = 1;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; ++i)
	{
		for (j = i+1; j < n; ++j)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > (n / 2))
			break;
	}
	printf("¸ÃÊı×ÖÎª%d\n", arr[i]);
}