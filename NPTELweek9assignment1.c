/*Write a program to print all the locations at which a particular element (taken as input) is found in a list and also print the total number of times it occurs in the list. The location starts from 1.
For example if there are 4 elements in the array
5
6
5
7
If the element to search is 5 then the output will be
5 is present at location 1
5 is present at location 3
5 is present 2 times in the array.
*/


#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;
   //"search" is the key element to search and 'n' is the total number of element of the array
   // "count" is to store total number of elements
 scanf("%d", &n); //Number of elements is taken from test case

 int c;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search); // The element to search is taken from test case

/* Use the printf statements as below:
"%d is present at location %d.\n"  for each locations
"%d is not present in the array.\n" if the element is not found in the list
"%d is present %d times in the array.\n"
*/

int counter=0, i;
for (i=0; i<n; i++){
  if (search==array[i]){
  	printf("%d is present at location %d.\n",search,i+1);
    counter++;
  }
}
if (counter==0)
  printf("%d is not present in the array.",search);
else
  printf("%d is present %d times in the array.",search, counter);
}

// modified
