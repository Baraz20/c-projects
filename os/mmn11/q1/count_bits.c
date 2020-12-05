/*this program counts the number of turned bits in a given number*/
#include <stdio.h>

int count_bits(long int);

int main()
{
	long int input; /*input from user*/
	printf("Please enter an integer:\n");
	scanf("%ld", &input);
	printf("The number: %ld has %d bits turned on.\n",input,count_bits(input));
	return 0;
}

/*
 * Function counts the number of turned on bits (1) in a decimal integer and returns the count. 
 * param: num - is the decimal number given to the function to be checked.
*/
int count_bits(long int num)
{
	int count = 0;
	while(num) /*while num is a non-zero*/
	{
		count += num & 1; /* using a mask for only the first bit*/
		num = (unsigned)num >> 1; /*using unsighend in case of negative number*/
	}
	return count;
}