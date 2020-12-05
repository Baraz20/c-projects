/*this program take an unsigned short int and counts the number of odd bits that are turned on*/
#include <stdio.h>
#define STEP 2 /*number of steps to shift*/


int count_odd_bits(unsigned short int num);

int main()
{
	unsigned short int input; /* input from user*/
	printf("enter an intger:\n");
	while(scanf("%hu",&input) != EOF){ 	/* getting input until no reaching end of file*/
		printf("The number %hu\thas %d bits in the odd indexies turned on.\n", input, count_odd_bits(input));
	}
	return 0;
}


/*
 * This function counts and returns the number of the ODD turned on bits of an unsigned short integer.
 * param: num - is an unsigned short integer
*/
int count_odd_bits(unsigned short int num)
{
	int count = 0;
	num >>= 1;	/*skiping the first bit to get to the odd bits*/
	while(num){ /*while num is not 0*/
		count += num&1;
		num >>= STEP; 
	}
	return count;
}