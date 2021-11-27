#include <stdio.h>

int main()
{
	float a,b,c;
	float a2,b2,c2;
	printf("enter 1st side of a triagle : ");
	scanf("%f",&a);
	printf("enter 2nd side of a triagle : ");
	scanf("%f",&b);
	printf("enter 3rd side of a triagle : ");
	scanf("%f",&c);

	a2 = a*a;
	b2 = b*b;
	c2 = c*c;

	if (((a+b)<=c)||((a+c)<=b)||((c+b)<=a))
		printf("sorry bro!! not a triagle !!!..\n");
 
	else if (a == b && b == c)
		printf("isosceles triagle\n");

	else if ((a==b && a != c)||(b==c && c !=a)||(a==c && a!=b))
	{
		if ((a2 + b2 == c2 )||(a2 + c2 == b2)||(c2 + b2 == a2))
			printf("right angeled and equilateral triagle\n");
		else 
			printf("equilateral triagle\n");
	}
	else if ((a != b) && (b != c) && (c != a))
	{
		if ((a2 + b2 == c2 )||(a2 + c2 == b2)||(c2 + b2 == a2))
			printf("right angeled triagle\n");
		else
			printf("scalene triagle\n");
	}
}