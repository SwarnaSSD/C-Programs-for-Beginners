#include <stdio.h>
int main()
{
	int cur,prev;
	float bill;
	printf("Enter Previous and Current Electric Reading ");
	scanf("%d%d", &prev, &cur);
	bill = 3.75 * (cur - prev);
	printf("Electric Bill = Rs.%f", bill);
	return 0;
}

