#include "Code1304.h"

#include <stdio.h>

int Code1304::Solution()
{
	int n;
	while (1)
	{
		scanf("%d", &n);
		if (n <= 100 && n > 0)
		{
			break;
		}
	}

	int arr[n][n];
	int nVal = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[j][i] = nVal;
			++nVal;
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		for (int j = 0; j < sizeof(arr[i]) / sizeof(int); ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}