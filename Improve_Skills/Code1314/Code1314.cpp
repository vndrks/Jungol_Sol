#include "Code1314.h"

#include <stdio.h>

int Code1314::Solution()
{
	int n;

	while (1)
	{
		scanf("%d", &n);
		if (n >= 1 && n <= 100)
		{
			break;
		}
	}
	
	char chArr[n][n];

	char ch = 'A';
	for (int j = 0; j < n; ++j)
	{
		if (j % 2 == 0)		// even num
		{
			for (int i = 0; i < n; ++i)
			{
				chArr[i][j] = ch;
				
				if (ch == 'Z')
				{
					ch = 'A';
				}
				else
				{
					++ch;
				}
			}
		}
		else				// odd num
		{
			for (int i = n - 1; i >= 0; --i)
			{
				chArr[i][j] = ch;
				
				if (ch == 'Z')
				{
					ch = 'A';
				}
				else
				{
					++ch;
				}
			}
		}
	}

	for (int i = 0; i < sizeof(chArr) / sizeof(chArr[0]); ++i)
	{
		for (int j = 0; j < sizeof(chArr[0]) / sizeof(char); ++j)
		{
			printf("%c ", chArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}