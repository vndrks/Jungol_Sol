#include "Code2046.h"

#include <stdio.h>

int Code2046::Solution()
{
	int nLength;
	int nType;

	scanf("%d %d", &nLength, &nType);

	int nVal = 1;
	switch (nType)
	{
	case 1:
		for (int i = 0; i < nLength; ++i)
		{
			for (int j = 0; j < nLength; ++j)
			{
				printf("%d ", nVal);
			}
			++nVal;
			printf("\n");
		}
		break;
	case 2:
		for (int i = 0; i < nLength; ++i)
		{
			if (i % 2 == 0)				// even num
			{
				for (int j = 1; j <= nLength; ++j)
				{
					printf("%d ", j);
					++nVal;
				}
			}
			else						// odd num
			{
				for (int j = nLength; j >= 1; --j)
				{
					printf("%d ", j);
				}
			}
			printf("\n");
		}
		break;
	case 3:
		for (int i = 1; i <= nLength; ++i)
		{
			for (int j = 1; j <= nLength; ++j)
			{
				printf("%d ", i * j);
			}
			printf("\n");

		}
		break;
	}


	return 0;
}
