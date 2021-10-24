#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("a = ");
	scanf("%i", &a);
	printf("\nb = ");
	scanf("%i", &b);
	printf("\nc = ");
	scanf("%i", &c);
	if ((a < (b + c)) && (b < (a + c)) && (c < (a + b)))
		printf("\nTrue");
	else
		printf("\nFalse");
}