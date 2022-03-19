#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void plus(int* iplus, int icount)
{
	int isum = 0;

	for (icount = 0; icount < 6; ++icount)
	{
		isum += iplus[icount];
	}

	printf("%d", isum);
}



int main(void)
{
	int ivalue[6] = { 0,0,0,0,0,0 };

	scanf("%d, %d, %d, %d, %d, %d", &ivalue[0], &ivalue[1], &ivalue[2], &ivalue[3], &ivalue[4], &ivalue[5]);

	plus(ivalue, 6);

	return 0;
}
