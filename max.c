#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 Numbers ");
	scanf("%d%d", &a, &b);
	switch(a>b)
	{
		case 1:printf("%d is Maximum.", a);
			   break;
	
		case 0:printf("%d is Maximum.", b);
			   break;
	}
	return 0;
}

