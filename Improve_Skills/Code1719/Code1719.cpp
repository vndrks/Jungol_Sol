#include "Code1719.h"

#include <stdio.h>

int Code1719::Solution()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	if (n > 100 || n % 2 == 0 || m < 1 || m > 4)
	{
		printf("INPUT ERROR!\n");
		return 0;
	}
	
	switch (m)
	{
	case 1:
		for (int h = 1; h <= n; ++h)
		{
			if (h <= (n / 2) + 1)
			{
				for (int i = 1; i <= h; ++i)
				{
					printf("*");
				}
			}
			else
			{
				for (int j = h; j <= n; ++j)
				{
					printf("*");
				}
			}
				
			printf("\n");
		}
		break;

	case 2:
		for (int h = 1; h <= n; ++h)
		{
			if (h <= (n / 2) + 1)
			{
				for (int i = h; i <= n / 2; ++i)
				{
					printf(" ");
				}
				for (int i = 1; i <= h; ++i)
				{
					printf("*");
				}				
			}
			else
			{
				for (int i = (n / 2) + 2; i <= h; ++i)
				{
					printf(" ");
				}
				for (int i = n - h; i >= 0; --i)
				{
					printf("*");
				}
			}

			printf("\n");
		}
		break;

	case 3:
		for (int h = 1; h <= n; ++h)
		{		
			if (h <= n / 2 + 1)		// up
			{
				for (int i = 1; i < h; ++i)				// ' ' n
				{
					printf(" ");
				}
				for (int i = 1; i <= n + (h - 1) * -2; ++i)	// '*' An = A1 + (n - 1)d : (arithmetic sequence)
				{
					printf("*");
				}
			}
			else					// down
			{
				for (int i = h; i < n; ++i)	// ' '
				{
					printf(" ");
				}
				
				//an = a1 + (h - 1) * 2 = 3
				int a1 = 3 - ((n / 2 + 2) - 1) * 2;
				for (int i = 1; i <= a1 + (h - 1) * 2; ++i)
				{
					printf("*");
				}
			}

			printf("\n");
		}
		break;
/*
***
 **
  *
  **
  ***
 */
	case 4:
		for (int h = 1; h <= n; ++h)
		{
			if (h <= n / 2 + 1)
			{
				// An = A1 + (n - 1) * d
				// An = 0 + (n - 1) * 1
				for (int i = 1; i <= h - 1; ++i)
				{
					printf(" ");
				}
				// An = A1 + (n - 1) * d
				// Ah = (n / 2 + 1) + (h - 1) * -1
				for (int i = 1; i <= (n / 2 + 1) - h + 1; ++i)
				{
					printf("*");
				}
			}
			else
			{
				for (int i = 1; i <= n / 2; ++i)
				{
					printf(" ");
				}
				
				// An = A1 + (n - 1) * d
				// = A(N / 2 + 1) = A1 + (N / 2 + 1 - 1) * 1
				// = A1 + (N / 2) = 1
				// :: A1 = 1 - (N / 2)
				int a1 = 1 - (n / 2);
				for (int i = 1; i <= a1 + (h - 1); ++i)
				{
					printf("*");
				}
			}
			printf("\n");
		}
		break;
	}


	return 0;
}
