#include <stdio.h>



int fibonacci(int number, int a, int b, int c){
	if (number == 0){
		return 0;
	}
	printf("%d\n",c);
	c = a+b;
	a=b;
	b = c;
	fibonacci(number-1,a,b,c);
}



void main(){
	int number;
	printf("Enter a number:\n");
	scanf("%d",&number);
	fibonacci(number,0,1,1);
}