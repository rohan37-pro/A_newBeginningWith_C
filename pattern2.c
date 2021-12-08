#include <stdio.h>
#include <string.h>





int main()
{
	int numbers = 1;
	int i = 1,j=1;
	int space = 10,k;

	for (;i<5;++i)
	{
		for (k=0;k<=space;++k)
			printf(" ");

		for (j=1;j<=i;++j)
		{
			printf("%d ",numbers);
			++numbers;
		}
		printf("\n");
		--space;
	}


}	