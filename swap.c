#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a = ");
	scanf("%d", &a);
	printf("Enter b = ");
	scanf("%d", &b);
	int c = a;
	a = b;
	b = c;
	printf(" a = %d  ,  b = %d", a, b);
	return 0;
}
	
