#include <stdio.h>
int main()
{
	int x, r, s = 0;
	scanf("%d", &x);
	while (x>0)
	{
		r = x % 10;
		s = s + r;
		x = x / 10;
	}
	printf("%d", s);

	getchar();
	return 0;

}


