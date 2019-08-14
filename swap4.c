#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a = ");
	scanf("%d", &a);
	printf("Enter b = ");
	scanf("%d", &b);
	printf("Enter c = ");
	scanf("%d", &c);
	a = a + b + c;
	b = a - (b + c);
	c = a - (b + c);
	a = a - (b + c);
 	printf(" a = %d  ,  b = %d  ,  c = %d", a, b ,c);
	return 0;
}
