#include <stdio.h>
#include <math.h>

int main()
{
	float s,a,b,c,ar,f;
	printf("Enter 3 sides of a triangle ");
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c)/2;
	f = (s * (s-a) * (s-b) * (s-c));
	ar = sqrt(f);
	printf("Area of the Triangle is %f ", ar);
	return 0;
}

