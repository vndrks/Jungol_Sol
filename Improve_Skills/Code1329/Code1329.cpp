#include "Code1329.h"

#include <stdio.h>

int Code1329::Solution()
{
	int n;

	scanf("%d", &n);

	if (n % 2 == 0 || n > 100 || n < 0)
	{
		printf("INPUT ERROR!\n");
		return 0;
	}

/*
*
 ***
  *****
   *******
  *****
 ***
*
*/
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
			// An = 1 + (n - 1) * 2
			for (int i = 1; i <= 1 + (h - 1) * 2; ++i)
			{
				printf("*");
			}
		}
		else
		{
			// Sol.1 - Get An
			// An = A1 + (n - 1) * d
			// An = A1 + (n - 1) * -1 =  A1 - n + 1   > A1 = N / 2 - 1
			// An = (N / 2 - 1) - n + 1
			// An = N / 2 - n (n = h = 1 일 경우만 성립. h를 1로 만들어야 하나 수식 복잡하여 Sol2 방법으로 해결)

			// Sol.2 - Get A1
			// A1 = ( N / 2 ) * 2
			// An = ( N / 2 ) * 2 + (h - 1) * -1
			int a1 = (n / 2) * 2;
			for (int i = 1; i <= a1 + (h - 1) * -1; ++i)
			{
				printf(" ");
			}
			
			// Bn = B1 + (n - 1) * d
			// B1 = 2 * N - 1
			// Bn = 2 * N - 1 + (h - 1) * -2

			int b1 = 2 * n - 1;
			for (int i = 1; i <= b1 + (h - 1) * -2; ++i)
			{
				printf("*");
			}	
		}

		printf("\n");
	}

	return 0;
}
