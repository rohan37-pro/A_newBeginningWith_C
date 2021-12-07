#include <stdio.h>


int main()
{
	int n;
	int r;
	int i;
	int nfact=1;
	int n_r_fact=1;

	printf("total number of object : ");
	scanf("%d",&n);
	printf("number of object selected : ");
	scanf("%d",&r);

	for (i=1;i<=n;++i)
		nfact*=i;
	
	for (i=1;i<=(n-r);++i)
		n_r_fact*=i;
	
	printf("permutation nPr = %d\n",nfact/n_r_fact);
}