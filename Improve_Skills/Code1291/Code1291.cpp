#include "Code1291.h"

#include <stdio.h>
#include <iostream>

Code1291::Code1291()
{
}

Code1291::~Code1291()
{
}

int Code1291::Solution()
{
	int nFrom = 0;
	int nTo = 0;

	while (1)
	{
		scanf("%d %d", &nFrom, &nTo);

		if (nFrom < 2 || nFrom > 9 || nTo < 2 || nTo > 9)
		{
			printf("INPUT ERROR!\n");
		}
		else
		{
			break;
		}
	}

	for (int y = 1; y <= 9; ++y)
	{
		for (int x = nFrom;
			nFrom <= nTo ? x <= nTo : x >= nTo;
			nFrom <= nTo ? ++x : --x)
		{
			printf("%d * %d = %2d", x, y, x * y);
			printf("   ");
		}
		printf("\n");
	}

	return 0;
}
