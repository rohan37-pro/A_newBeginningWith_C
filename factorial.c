#include <stdio.h>


int main()
{
	int num;
	int i;
	int factorial=1;

	printf("enter a number : ");
	scanf("%d",&num);
	for (i=1;i<=num;++i)
	{
		factorial = factorial * i; 
	}
	printf("the factorial of %d is %d \n",num,factorial);
}
