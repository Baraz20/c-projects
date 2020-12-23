#include <stdio.h>

int main()
{
	char *p[2][3] = {{"abc","def","gh"},{"ijklmn","opqrstuv","wxyz"}};
	putchar(***p);
	putchar((*(*(p+1)+1))[6]);
	putchar(*(*(p+1)+1)[6]);
	putchar(**(p[1]+2));
	putchar(**p[1]);
	putchar(*(p[1][2]+2));
	return 0;
}