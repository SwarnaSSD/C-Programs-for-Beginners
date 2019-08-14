#include <stdio.h>
int main()
{
	int l,b;
	int p,a;
	printf("Enter Length and Breadth of a Rectangle ");
	scanf("%d%d",&l,&b);
	p = 2 * (l + b);
	a= l * b;
	printf("Perimeter = %d  ", p);
	printf("Area = %d", a);
	return 0;
}

