#include "Code1337.h"

#include <stdio.h>
#include <stdlib.h>

//enum JeDrawType
//{
//	JE_HYPOTENUSE = 0
//	, JE_COLUMN
//	, JE_ROW
//};

int Code1337::Solution()
{
	int N;
	scanf("%d", &N);

	if (N > 100 || N < 1)
	{
		return 0;
	}

	int **arr;
	int nVal = 0;
	int c = 0;
	int r = 0;
	int nDrawType = 0;

	arr = (int**)malloc(sizeof(int*) * N);
	
	for (int i = 0; i < N; ++i)
	{
		arr[i] = (int*)malloc(sizeof(int) * (i + 1));
	}
	
	for (int i = N; i >= 1; --i)
	{
		switch (nDrawType)
		{
		case 0:
			for (int j = 0; j < i; ++j, ++nVal)
			{
				if (nVal == 10)
				{
					nVal = 0;
				}

				arr[r++][c++] = nVal;
			}
			--r;
			--c;
			nDrawType = 1;
			break;

		case 1:
			for (int j = 0; j < i; ++j, ++nVal)
			{
				if (nVal == 10)
				{
					nVal = 0;
				}
				--c;
				arr[r][c] = nVal;
			}
			
			nDrawType = 2;
			break;

		case 2:
			
			for (int j = 0; j < i; ++j, ++nVal)
			{
				if (nVal == 10)
				{
					nVal = 0;
				}
				arr[--r][c] = nVal;
			}
			++r;
			++c;
			nDrawType = 0;
			break;
		}
	}
	
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}