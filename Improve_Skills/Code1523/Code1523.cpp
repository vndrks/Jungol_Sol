#include "Code1523.h"

#include <stdio.h>

int Code1523::Solution()
{
	int n;
	int m;

	while (1)
	{
		scanf("%d %d", &n, &m);
		if ((n > 0 && n <= 100) && (m >= 1 && m <= 3))
		{
			break;
		}
		else
		{
			printf("INPUT ERROR!\n");
			return 0;
		}
	}

	switch (m)
	{
	case 1:
		
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				printf("*");
			}
			printf("\n");
		}

		break;

	case 2:
		for (int i = n; i >= 1; --i)
		{
			for (int j = 1; j <= i; ++j)
			{
				printf("*");
			}
			printf("\n");
		}

		break;

	case 3:
		for (int i = 1; i <= n; ++i)
		{
			for (int k = i; k <= n - 1; ++k)
			{
				printf(" ");
			}
			for (int j = 1; j <= (i * 2) - 1; ++j)
			{
				printf("*");
			}
			printf("\n");
		}
		break;
	}
	
	return 0;
}
