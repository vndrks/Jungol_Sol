#include "Code1641.h"

#include <stdio.h>
#include <stdlib.h>

int Code1641::Solution()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);
	
	if (n % 2 == 0 || n > 100 || n <= 0 || m < 1 || m > 3)
	{
		printf("INPUT ERROR!\n");
		return 0; 
	}
	
	int **arrType1;
	int nVal;

	int nFirstTerm = 0;

	switch (m)
	{
	case 1:
		nVal = 1;
		arrType1 = (int**)malloc(sizeof(int*) * n);
		for (int i = 0; i < n; ++i)
		{
			arrType1[i] = (int*)malloc(sizeof(int) * (i + 1));
			if (i % 2 == 1)
			{
				for (int j = i; j >= 0; --j, ++nVal)
				{
					arrType1[i][j] = nVal;
				}
			}
			else
			{
				for (int j = 0; j <= i; ++j, ++nVal)
				{
					arrType1[i][j] = nVal;
				}
			}
		}

		for (int h = 0; h < n; ++h)
		{
			for (int w = 0; w <= h; ++w)
			{
				printf("%d ", arrType1[h][w]);
			}
			printf("\n");
		}

		for (int i = 0; i < n; ++i)
		{
			free(arrType1[i]);
		}
		free(arrType1);

		break;

	case 2:
		nVal = 0;
		nFirstTerm = (2 * n) - 1;
		for (int i = 1; i <= n; ++i, ++nVal)
		{
			for (int nSpace = 1; nSpace < i; ++nSpace)
			{
				printf("  ");
			}
			for (int j = 1; j <= nFirstTerm; ++j)
			{
				printf("%d ", nVal);
			}
			nFirstTerm -= 2;
			printf("\n");
		}

		break;

	case 3:
		for (int h = 1; h <= n; ++h)
		{
			nVal = 1;
			if (h <= n / 2 + 1)
			{
				for (int i = 1; i <= h; ++i, ++nVal)
				{
					printf("%d ", nVal);
				}
			}
			else
			{
				for (int i = 1; i <= n - h + 1; ++i, ++nVal)
				{
					printf("%d ", nVal);
				}
			}
			printf("\n");
		}
		break;
	}

	return 0;
}
