#include <stdio.h>

int main()
{
	int c = 0;
	int r = 32; //tamanho
	int r2 = r;
	while (r != 0)
	{
		c++;
		if (c > r2 - 1)
		{
			c = 0;   // same as c = !r
			r--;
			printf("\n");
		}
		else
		{
			if (c < r) printf(" ");
			else
			{
				if ((~c & r) != 0) printf(" `");
				else printf(" #");
			}
		}
	}
	getchar();
	return 0;
}
