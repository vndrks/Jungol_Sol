#include "Code1303.h"

#include <stdio.h>

int Code1303::Solution()
{
	int n;
	int m;

	while (1)
	{
		scanf("%d %d", &n, &m);
		
		if (n <= 100 && m <= 100)
		{
			break;
		}
	}
	
	for (int val = 1; val <= n * m; ++val)
	{
		printf("%d", val);
		if (val % m == 0)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}

	return 0;
}
