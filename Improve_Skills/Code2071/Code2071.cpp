#include "Code2071.h"

#include <stdio.h>
#include <stdlib.h>

int Code2071::Solution()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	if (n < 1 || n > 30 || m < 1 || m > 3)
	{
		return 0;
	}

	int** arr;
	arr = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; ++i)
	{
		arr[i] = (int*)malloc(sizeof(int) * (i + 1));
	}
	
	for (int r = 0; r < n; ++r)
	{
		int nVal = 1;
		for (int c = 0; c <= r; ++c)
		{
			if (r <= 1)
			{
				arr[r][c] = 1;
			}
			else if (c == r || c == 0)
			{
				arr[r][c] = 1;
			}
			else
			{
				arr[r][c] = arr[r - 1][c - 1] + arr[r - 1][c];
			}
		}
	}

	switch (m)
	{
	case 1:
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}

		break;

	case 2:
		for (int i = n - 1, s = 0; i >= 0; --i, ++s)
		{
			for (int k = 0; k < s; ++k)
			{
				printf(" ");
			}
			for (int j = 0; j <= i; ++j)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		break;

	case 3:
		for (int j = n - 1; j >= 0; --j)
		{
			for (int i = n - 1; i >= j; --i)
			{
				printf("%d ", arr[i][j]);
			}

			printf("\n");
		}
		break;
	};
	   
	for (int i = 0; i < n; ++i)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}
