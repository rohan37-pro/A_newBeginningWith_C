#include <stdio.h>


int main()
{
	int n;
	int r;
	int i;
	int n_r_fact=1;
	int rnfact=1;
	int cal;

	printf("total number of object : ");
	scanf("%d",&n);
	printf("number of object selected : ");
	scanf("%d",&r);


	cal = n-r;
	if (n<r)
		printf("n should be greater than r\n");
	
	else
	{

		for (i=1;i<=(n-r);++i)
			n_r_fact*=i;

		for (i=0;i<cal;++i)
		{
			rnfact*=n;
			--n;
		}
	
		printf("combination nCr = %d\n",(rnfact/n_r_fact));
	}

}	