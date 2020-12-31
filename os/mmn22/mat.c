#include "mat.h"
#include <stdio.h>
#include <stdlib.h>

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

/*this function prints a matrix 
@matrix - this is the matrix being printed.
*/
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

/*
this function takes 2 matrices and addes them
into another matrix
@mat_a - first matrix being added with @mat_b 
@mat_b - second matrix being added with @mat_a
@mat_res - the matrix which will store the result of (@mat_a + @mat_b)
*/
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

/*
this function takes 2 matrices and subtracts them into another matrix
@mat_a - first matrix being subtracted from.
@mat_b - second matrix being subtracted with.
@mat_res - the matrix which will store the result of (@mat_a - @mat_b)
*/
void sub_mat(mat mat_a,mat mat_b,mat mat_res){
	mat mat_temp;
	init_mat(mat_temp);
	mul_scalar(mat_b,-1,mat_temp);
	add_mat(mat_a, mat_temp, mat_res);
}

/*
this function calculates a matrix multiplication with a scalar.
@matrix - this is the matrix being multiplied by @scalar
@scalar - the scalar you want to multiplie @matrix with.
@mat_res - the matrix which will store the result of (@scalar * @matrix)
*/
void mul_scalar(mat matrix,float scalar,mat mat_res)
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

/*
this function transpose a matrix.
@matrix - the matrix you want to transpose.
@mat_res - the matrix which will store the result of @matrix being transpose. 
*/
void trans_mat(mat matrix,mat mat_res)
{
	int r,c;
	
	for (r = 0; r < MAT_SIZE; ++r)
	{
		for (c = 0; c < MAT_SIZE; ++c)
		{
			/* switched between row and column*/
			mat_res[r][c] = matrix[c][r];
		}
	}
}

/*
this function calculates a matrix multiplication with another matrix with the same dimensions.
@mat_a - this first matrix 
@mat_b - the second matrix.
@mat_res - the matrix which will store the result of (@mat_a * @mat_b)
*/
void mul_mat(mat mat_a,mat mat_b,mat mat_res)
{
	int r,c,i;
	for (r = 0; r < MAT_SIZE; ++r)
	{
		for (c = 0; c < MAT_SIZE; ++c)
		{
			for (i = 0; i < MAT_SIZE; ++i)
			{
				mat_res[r][c] += mat_a[r][i] * mat_b[i][c];
			}
		}
	}
}
