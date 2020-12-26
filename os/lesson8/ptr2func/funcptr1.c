#include <stdio.h>

int arrSample(int [], int, int, int (*)(int,int));
int add(int,int);
int sub(int,int);
int mul(int,int);

int main()
{
	int arr[] = {1,2,3,4,5};

	printf("result with add : %d\n",arrSample(arr,5,3,add)); 
	printf("result with sub : %d\n",arrSample(arr,5,2,sub)); 
	printf("result with mul : %d\n",arrSample(arr,5,1,mul)); 
	return 0;
}

/* acc - accumulator */
int arrSample(int arr[], int n, int acc, int (*func)(int,int)){
	int i;
	for (i = 0; i < n; i++)
	{
		acc = func(acc,arr[i]);
	}
	return acc;
}

int add(int n1, int n2){
	return n1 + n2;
}
int sub(int n1, int n2){
	return n1 - n2;
}
int mul(int n1, int n2){
	return n1 * n2;
}