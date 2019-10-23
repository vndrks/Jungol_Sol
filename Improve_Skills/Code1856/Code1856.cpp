#include "Code1856.h"

#include <stdio.h>

int Code1856::Solution()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	int arr[n][m];

	int number = 1;
	for (int hPos = 0; hPos < n; ++hPos)
	{
		if ((hPos % 2 == 0))	// even num
		{
			for (int wPos = 0; wPos < m; ++wPos, ++number)
			{
				arr[hPos][wPos] = number;
			}
		}
		else					// odd num
		{
			for (int wPos = m - 1; wPos >= 0; --wPos, ++number)
			{
				arr[hPos][wPos] = number;
			}
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
