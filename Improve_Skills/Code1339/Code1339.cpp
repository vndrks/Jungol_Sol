#include "Code1339.h"

#include <stdio.h>
#include <stdlib.h>

int Code1339::Solution()
{
	int N;
	scanf("%d", &N);

	if (N < 1 || N > 100 || N % 2 == 0)
	{
		printf("INPUT ERROR\n");
		return 0;
	}

	// Memory Allocation
	char** pArr;
	pArr = (char**)malloc(sizeof(char*) * N);

	for (int i = 0, nObjCnt = 0; i < N; ++i)
	{
		if (i <= N / 2)
		{
			++nObjCnt;
			pArr[i] = (char*)malloc(sizeof(char*) * nObjCnt);
		}
		else
		{
			--nObjCnt;
			pArr[i] = (char*)malloc(sizeof(char*) * nObjCnt);
		}
	}

	int nRowCnt = 1;
	char chVal = 'A';
	// Insert Alphabet
 	for (int c = N / 2; c >= 0; --c)
	{
		// An = A1 + (n - 1) * d
		// = An = 1 + (n - 1) * 2 = 2n - 1
		int r = c;
		for (int i = 1; i <= 2 * nRowCnt - 1; ++i, ++r, ++chVal)
		{
			if (chVal == 'Z' + 1)
			{
				chVal = 'A';
			}
			pArr[r][c] = chVal;
		}
		++nRowCnt;
	}

	for (int h = 0; h < N; ++h)
	{
		if (h <= N / 2)
		{
			for (int w = 0; w <= h; ++w)
			{
				printf("%c ", pArr[h][w]);
			}
		}
		else
		{
			for (int w = 0; w < N / 2; ++w)
			{
				printf("%c ", pArr[h][w]);
			}
		}
		
		printf("\n");
	}
	// Release memory
	for (int i = 0; i < N; ++i)
	{
		free(pArr[i]);
	}
	free(pArr);

	return 0;
}
