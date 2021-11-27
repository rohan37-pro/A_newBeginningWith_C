#include <stdio.h>

int main( ) {
	int year;
	printf("enter year : ");
	scanf("%d",&year);
	if (year%4 == 0)
		printf("the year %d is a leap year\n",year);
	else 
		printf("the year %d is not a leap year\n",year);
} 