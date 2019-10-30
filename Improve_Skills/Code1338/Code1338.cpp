#include "Code1338.h"

#include <stdio.h>
#include <stdlib.h>

int Code1338::Solution()
{
	int N;
	scanf("%d", &N);

	if (N > 100 || N <= 0)
	{
		return 0;
	}

	char** arr;

	arr = (char**)malloc(sizeof(char*) * N);

	for (int i = 0; i < N; ++i)
	{
		arr[i] = (char*)malloc(sizeof(char) * N);
	}

	// insert ' '  An = (N - 1) + (n - 1) * -1
 	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - i - 1; ++j) // N = 5 老版快 霉青何磐 4, 3, 2, 1, 0
		{
 			arr[i][j] = ' ';
		}
	}

	// insert Alphabet
	char chVal = 'A';
	for (int h = N; h > 0; --h)
	{
		int c = N - 1;
		
		for (int r = N - h; r < N; ++r, --c)
		{
			arr[r][c] = chVal;
			++chVal;
			if (chVal == 'Z' + 1)
			{
				chVal = 'A';
			}
		}
	}

	// draw
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%c", arr[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	// release memory
	for (int i = 0; i < N; ++i)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}
