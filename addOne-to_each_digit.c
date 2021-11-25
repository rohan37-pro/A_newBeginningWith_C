#include <stdio.h>
#include <string.h>


int main()
{	
	char digit[5];
	int d, i;
	char s;
	printf("enter a five digit number : ");
	scanf("%s",&digit);
	d = strlen(digit);
	if (d == 5){
		for (i=0; i < d; i++){
			printf("%d",digit[i]+'1'-'0'-'0');

		}
		printf("\n");			
	}
	
}
