#include "Code1307.h"

#include <stdio.h>

int Code1307::Solution()
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

	char ch = 'A';
	char chArr[n][n];

	for (int j = n - 1; j >= 0; --j)
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
