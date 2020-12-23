#include "mat.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* initialize MAT_A-F*/
	mat MAT_A; 
	mat MAT_B; 
	mat MAT_C; 
	mat MAT_D; 
	mat MAT_E; 
	mat MAT_F; 
	init_mat(MAT_A);
	init_mat(MAT_B);
	init_mat(MAT_C);
	init_mat(MAT_D);
	init_mat(MAT_E);
	init_mat(MAT_F);
	MAT_A[0][3] = -201.1234;
	print_mat(MAT_A);
	return 0;
}

