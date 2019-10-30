#include "Code1707.h"

#include <stdio.h>
#include <stdlib.h>

int Code1707::Solution()
{
	int n;

	scanf("%d", &n);

	if (n < 1 || n > 100)
	{
		return 0;
	}

	int** arr;

	// Memory Allocation
	arr = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; ++i)
	{
		arr[i] = (int*)malloc(sizeof(int) * n);
	}
	
	// Insert data to arr
	
	int nTotalMoveCnt = 2 * n - 1;
	int nStepCnt = n;
	int nVal = 1;
	int nArrowType = 1;	// 1 : > , 2 : v , 3 : < , 4 : ^
	int r = 0;
	int c = 0;
	do
	{		
		switch (nArrowType)
		{
		case 1:		// >		
			for (int i = 0; i < nStepCnt; ++i)
			{
				arr[r][c++] = nVal++;
			}
			
			--c;	// postfix 로 c 값이 1이 더 증가되기 때문에 1 감소시킨다.
			
			nArrowType = 2;
			--nStepCnt;
			break;

		case 2:		// v
			for (int i = 0; i < nStepCnt; ++i)
			{
				arr[++r][c] = nVal++;
			}

			nArrowType = 3;
			break;

		case 3:		// <
			for (int i = 0; i < nStepCnt; ++i)
			{
				arr[r][--c] = nVal++;
			}

			nArrowType = 4;
			--nStepCnt;
			break;

		case 4:		// ^
			for (int i = 0; i < nStepCnt; ++i)
			{
				arr[--r][c] = nVal++;
			}

			++c;
			nArrowType = 1;

			break;
		}
	} while (--nTotalMoveCnt);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// Release Memory
	for (int i = 0; i < n; ++i)
	{
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
