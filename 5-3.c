#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int sum = 0;

	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	if (a > 0)
		sum += a;
	if (b > 0)
		sum += b;
	if (c > 0)
		sum += c;
	if (d > 0)
		sum += d;
	if (e > 0)
		sum += e;

	printf("%d", sum);

	return 0;
}