#include <stdio.h>

int main()
{
	char array[3][50];
	int i ;
	printf("enter three strings : ");
	scanf("%s %s %s",&array[0],&array[1],&array[2]);
	printf("strings  are stored into an array successfull\n");
	printf("three strings are\n");
	for ( i = 0; i<3 ; ++i)
	{
		printf("array[%d] %s\n",i,array[i]);
	}
	printf("\n");

}