#include "Code1856.h"

#include <stdio.h>

int Code1856::Solution()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	int arr[n][m];

	for (int height = 0; height < n; ++height)
	{
		if ((height % 2 == 0))	// ยฆผ๖วเ
		{
			for (int w = m; w >= 1; --w)
			{
				arr[height][w] = w * m;
			}
		}
		else					// ศฆผ๖วเ
		{
			for (int w = 0; w < m; ++w)
			{
				arr[height][w] = w * m;
			}
		}
	}
	return 0;
}
