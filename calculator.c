#include <stdio.h>
int main()
{
	int a,b,c=0; char ch;
	printf("Enter operation to be done * or + or - or / ");
	scanf("%c", &ch);
	printf("Enter 2 values a and b ");
	scanf("%d%d", &a, &b);
	switch(ch)
	{
		case '+': c=a+b;
				  printf("%d + %d = %d ", a,b,c);  
					break;

		case '-': c=a-b; 
					printf("%d - %d = %d ", a,b,c); 
					 break;

		case '*': c=a*b; 
					printf("%d * %d = %d ", a,b,c); 
					 break;

		case '/': c=a/b; 		
					printf("%d / %d = %d ", a,b,c);
					  break;

		default : printf("Wrong Input."); 	
	}

	return 0;
}
