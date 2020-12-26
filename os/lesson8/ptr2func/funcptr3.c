#include <stdio.h>

int f1(int, int);
int f2(int, int);

int (*g(int))(int, int);

int main()
{
	int (*p)(int,int);
	p = f1;
	printf("\n%d\n",p(10,20));
	printf("address of f1 %x\n",(unsigned int)p);

	p = f2;
	printf("\n%d\n",p(10,20));
	printf("address of f2 %x\n",(unsigned int)p);
	return 0;

	printf("\n%d\n",(g(20))(8,5));
}

int f1(int num1, int num2){
	return num1 + num2;
}

int f2(int num1,int num2){
	return num1 * num2;
}

int (*g(int x))(int, int)
{
	if (x > 50)
		return f1;
	return f2;
}