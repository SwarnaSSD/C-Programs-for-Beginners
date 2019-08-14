#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter a = ");
	scanf("%d", &a);
	printf("Enter b = ");
	scanf("%d", &b);
	printf("Enter c = ");
	scanf("%d", &c);
	d = a;
	a = b;
	b = c;
	c = d;
 	printf(" a = %d  ,  b = %d  ,  c = %d", a, b ,c);
	return 0;
}

