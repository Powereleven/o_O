#include <stdio.h>

int main()
{
	int c = 0;
	int r = 32;
	int r2 = r;
	while (r != 0)
	{
		c++;
		if (c > r2 - 1)
		{
			c = !r; // same as c = 0;
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
