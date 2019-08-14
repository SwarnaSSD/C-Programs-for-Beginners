#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter 3 values for a, b, c ");
	scanf("%d%d%d", &a, &b, &c);
	max = ((a>b)&&(a>c))?a:(((b>c)&&(b>a))?b:c);
	printf("%d is the Biggest of the three.",max);
	return 0;
}

