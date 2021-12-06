#include <stdio.h>
#include <string.h>


int main()
{

	int len, i = 0;
	char array[500];


	printf("enter a sentace : ");
	while (1)
	{
		scanf("%c",&array[i]);
		if (array[i] == '\n')
			break;

		++i	;	
	}
	len = strlen(array);
	for (i = len-2; i>=0; --i)
		printf("%c",array[i]);


	printf("\n");
}