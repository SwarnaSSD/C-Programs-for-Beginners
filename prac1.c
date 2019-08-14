#include <stdio.h>
int main()
{
	int a,b,c;
	int sum,m;
	printf("Enter 3 numbers ");
	scanf("%d%d%d", &a,&b,&c);
	sum = a + b + c;
	m = a * b * c;
	printf("Sum = %d	Product = %d ", sum, m);
	return 0;
}

