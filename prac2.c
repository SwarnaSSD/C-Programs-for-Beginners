#include <stdio.h>
int main()
{
	float bs,da,hra,gs;
	printf("Enter Basic Salary = Rs.");
	scanf("%f", &bs);
	da = 0.74 * bs;
	hra = 0.15 * bs;
	gs = bs + da + hra;
	printf("Gross Salary is = Rs.%f", gs);
	return 0;
}

