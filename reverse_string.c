#include <stdio.h>
#include <string.h>


int main()
{
	char inp[100];
	int i, len ;
	printf("enter strings : ");
	scanf("%s",&inp);
	len = strlen(inp);
	len -= 1;
	for (i=len ; i>=0; --i){
		printf("%c",inp[i]);
	}
	printf("\n");
}