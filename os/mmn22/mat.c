#include "mat.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* this function initialize a given matrix to have all the elements be 0
@matrix - the matrix you want to initialize
*/
void init_mat(mat matrix){
	int r,c;
	
	for (r = 0; r < MAT_SIZE; ++r)
	{
		for (c = 0; c < MAT_SIZE; ++c)
		{
			matrix[r][c] = 0;
		}
	}
}

void print_mat(mat matrix){
	int r,c;
	
	for (r = 0; r < MAT_SIZE; ++r)
	{
		for (c = 0; c < MAT_SIZE; ++c)
		{
			printf("%7.2f ",matrix[r][c]);
		}
		printf("\n");
	}
}

void add_mat(mat mat_a,mat mat_b,mat mat_res)
{
	int r,c;
	
	for (r = 0; r < MAT_SIZE; ++r)
	{
		for (c = 0; c < MAT_SIZE; ++c)
		{
			mat_res[r][c] = mat_a[r][c] + mat_b[r][c]; 
		}
	}
}

void sub_mat(mat mat_a,mat mat_b,mat mat_res){
	mat mat_temp;
	init_mat(mat_temp);
	scalar_mul(mat_b,-1,mat_temp);
	add_mat(mat_a, mat_temp, mat_res);
}

void scalar_mul(mat matrix,float scalar,mat mat_res)
{
	int r,c;
	
	for (r = 0; r < MAT_SIZE; ++r)
	{
		for (c = 0; c < MAT_SIZE; ++c)
		{
			mat_res[r][c] = matrix[r][c] * scalar; 
		}
	}
}

