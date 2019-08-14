#include <stdio.h>
int main()
{
	float l,b,ar1,p,cir,r,ar2;
	int ch;	
	printf("Enter 1.Rectangle 2.Circle ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:	printf("Enter Length and Breadth of Rectangle ");
				scanf("%f%f", &l, &b);
				ar1 = l * b;
				p = 2 * ( l + b );
				printf("Area = %f	Perimeter = %f ", ar1, p);
				break;

		case 2:	printf("Enter Radius of Circle ");
				scanf("%f", &r);
				ar2 = 3.142 * r * r;
				cir = 2 * 3.142 * r;
				printf("Area = %f	Circumference = %f ", ar2, cir);
				break;

		default:printf("Wrong Input!! ");
	}
	return 0;
}

