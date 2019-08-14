#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float d,root,x1,x2;
	printf("Enter a, b, c ");
	scanf("%d%d%d", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	root = (float)b / (2 * a);
	if(d>0)
	{
		printf("Roots are Real and Unequal ");
	}
	else if(d==0)
	{		
		printf("Roots are Real and Equal , x = %f", root);
	}
	else
	{	
		d = d *(-1);
		x1 = (float)sqrt(d)/(2*a);
		x2 = (float)sqrt(d)/(2*a);
		printf("Two Roots of the equation are -%f +%fi and -%f -%fi", root, x1, root, x2);
	}
	return 0;
}

