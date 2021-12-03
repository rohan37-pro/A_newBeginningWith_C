#include <stdio.h>
#include <string.h>


int main()
{
	char array[200];
	int i = 0 ;
	int len;

	printf("enter a sentance : ");
	while (1)
	{
		scanf("%c",&array[i]);
		if (array[i] == '\n')
			break;
		else 
			++i;
	}
	printf("\ncharacter stored into a array successfully\n");
	len = strlen(array);
	for (i=0;i<len;++i)
	{
		printf("array[%d] = %c\n",i,array[i]);
	}
}