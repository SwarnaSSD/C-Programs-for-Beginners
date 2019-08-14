#include <stdio.h>
int main()
{
	int n;
	printf("Enter day number ");
	scanf("%d", &n);
	switch(n)
	{
		case 29:
		case 28: printf("February ");
				 break;

		case 30: printf("April	June	September	November ");
				 break;

		case 31: printf("January 	March	May		July	August	October		December ");
				 break;

		default: printf("Invalid Input! ");
	}
	return 0;
}

