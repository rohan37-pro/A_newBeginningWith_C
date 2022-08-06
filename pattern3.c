#include <stdio.h>

int main(){
	int num;
	int ptr1 = 0;
	int ptr2=1;

	scanf("%d", &num); 
	int num_array[num][num];
	for (int i=1; i<=num; i++){
		num_array[i-1][0] = 1;
		if (i==1)
			printf(" %d",num_array[i-1][0]);
		if (i!=1){
			for (int j=1; j<=i;j++){
				//printf("i=%d, j=%d ",i,j);

				if ((j-1)==0)
					ptr1 = 0;
				else
					ptr1 = num_array[i-2][j-2];
				if (j==i)
					ptr2 = 0;
				else
					ptr2 = num_array[i-2][j-1];
				num_array[i-1][j-1] =ptr1+ptr2;
				printf(" %d",num_array[i-1][j-1]);
			}
		}
		printf("\n");
	}
}
