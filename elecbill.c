#include <stdio.h>
int main()
{
	int u;float bill;
	printf("Enter No of units consumed ");
	scanf("%d", &u);
	if(u>0 && u<=200)
	bill = 0.50 * u;

	else if(u>200 && u<=400)
	bill= 100.0 + (0.65 * (u-200));

	else if(u>400 && u<=600)
	bill = 250.0 + (0.8 * (u-400));

	else 					// for 'u' more than 600
	bill = 425.0 + (1.25 * (u-600));

	printf("Electric Bill =Rs.%0.2f",bill);
	return 0;
}

