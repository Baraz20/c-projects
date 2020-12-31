#include <stdio.h>
#ifndef _mat__
#define _mat__
#define MAT_SIZE 4

typedef float mat[MAT_SIZE][MAT_SIZE];

/* util functions signature */
void init_mat(mat);

/* main functions signature */
void print_mat(mat);
void add_mat(mat,mat,mat);
void sub_mat(mat,mat,mat);
void mul_scalar(mat,float,mat);
void mul_mat(mat,mat,mat);
void mat_t(mat,mat);

#endif /* _mat__ */