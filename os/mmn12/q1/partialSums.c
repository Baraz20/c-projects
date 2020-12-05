/* This program gets an array of integers and a length as input
and calculates it's "partial sum" */
#include <stdio.h>
#include <stdlib.h>

/* init functions */
int* partialSums(int* arr,int len);
void printArray(int* arr,int len);
void printBinary(int a);

int main()
{
	int len, i;			/* len - length of inputed array */
	int *arr,*result;	/* inputed array and returned array */

	/* getting length for array */
	printf("please enter a length for the array:\n");
	scanf("%d", &len);

	arr = (int *)malloc(len * sizeof(int)); /* init array with the given length */

	/* getting elements of array */
	printf("please enter %d integers seperated by spaces for the array:\n", len);
	for(i = 0; i < len; i++){
		scanf("%d",arr+i);
	}

	/* printing given array */
	printf("the entered array of length %d is:\n",len);
	printArray(arr, len);

	/* getting and printing result */
	result = partialSums(arr, len);
	printf("the partial sum is:\n");
	printArray(result, len);

	return 0;
}

void printArray(int *arr, int len){
	/* description: 
	this function prints the elements of an array of integers. 
	params:
	arr - this is the given array that will be printed.
	len - this is the length of the given array.
	 */
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ",arr[i]); 
	}
	printf("\n");
}

int* partialSums(int *arr, int len){
	/* description:
	this function calculated the partial sums array from another given array.
	params:
	arr - this is the given array that a partial sums array will be created from.
	len - this is the length of the given array.
	*/

	/* init array of same size as the given array */
	int *result = (int *)malloc(len * sizeof(int)); 
	int i, sum = 0;
	for (i = 0; i < len; i++)
	{
		sum += arr[i];
		result[i] = sum;
	}
	return result;
}