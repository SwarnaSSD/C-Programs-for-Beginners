#include <stdio.h>
int main()
{
	int n,c=0;
	printf("Enter a Number ");
	scanf("%d", &n);
	switch(n)
	{
		case 0: printf("Zero ");
				break;

		default: switch(n>0)
				 {
					case 1: printf("Positive "); break;
					case 0: printf("Negative "); break;
				 }
	}
	return 0;
}

