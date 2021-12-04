#include <stdio.h>
#include <string.h>


int main()
{
	int ord;
	char c;
	int i;
	char array[200];

	printf("Uppercase converter input : ");
	while (1)
	{
		scanf("%c",&array[i]);
		ord = array[i];
		if (array[i] == '\n')
		{
			printf("\n");
			break;
		}

		else 
		{
			if  (ord>=97 && ord <= 122)
			{
				c = ord-32;

			}
			else{
				c = ord;
			}
			printf("%c",c);
			++i;
		}
			
	}

}