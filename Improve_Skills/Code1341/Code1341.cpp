#include "Code1341.h"

#include <stdio.h>

int Code1341::Solution()
{
	int nFrom;
	int nTo;
	
	scanf("%d %d", &nFrom, &nTo);

	for (int x = nFrom;
		nFrom <= nTo ? x <= nTo : x >= nTo;
		nFrom <= nTo ? ++x : --x)
	{
		for (int y = 1; y <= 9; ++y)
		{
			printf("%d * %d = %2d", x, y, x * y);
			if (y % 3 == 0)
			{
				printf("\n");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}

	return 0;
}
