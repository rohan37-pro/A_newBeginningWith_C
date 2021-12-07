#include <stdio.h>


int fact(int x)
{	
	int i;
	int fact = 1;
	for (i=1;i<=x;i++)
	{
		fact = fact * i;
	}
	return fact;
}



int main()
{
	int i;
	int ar,an;
	int itter,itter2;
	int row;
	int space;
	int coefficient =1;

	printf("number of rows in triagle : ");
	scanf("%d",&row);

	space = row*3;
	for(itter=0;itter<=row;itter++)
	{	
		for(i=0;i<=space;++i)
		printf(" ");
		an = itter;
		ar = itter;
		itter2=itter;
		while(itter2>=0)
		{
			coefficient = (fact(an)/(fact(ar)*fact(an-ar)));
			printf("%d ",coefficient);
			itter2--;
			ar--;
		}
		space--;
		printf("\n");
		
	}
	
}	

