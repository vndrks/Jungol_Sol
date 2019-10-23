#include "Code1338.h"

#include <stdio.h>
#include <stdlib.h>

int Code1338::Solution()
{
/*
		 A
	   B F
	 C G J
   D H K M
 E I L N O
*/
/*
0 4		1 4		2 4		3 4		4 4
1 3     2 3     3 3		4 3
2 2     3 2     4 2
3 1     4 1
4 0
*/

	int N = 5;
	//scanf("%d", &N);

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
 			arr[i][j] = '0';
		}
	}

	// insert Alphabet
	char chVal = 'A';
	for (int h = N; h > 0; --h)
	{
		int c = N - 1;
		for (int r = N - h; r < h; ++r, --c)
		{
			arr[r][c] = chVal;
			++chVal;
			if (chVal == 'Z')
			{
				chVal = 'A';
			}
		}
	}
	
	// draw
	for (int i = 1; i <= sizeof(arr) / sizeof(arr[0]); ++i)
	{
		for (int j = 0; j = sizeof(arr[0]) / sizeof(char); ++j)
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
