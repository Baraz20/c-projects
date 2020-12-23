#include <stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);

int main()
{
	int (*a[3])(int,int) = {add,mul,sub};
	int x;

	while (1)
	{
		scanf("%d",&x);
		printf("\n1. add\n2. sub\n3. add\n4. exit");
		switch (x){
			/*todo refine this*/
			case 1: case 2: case 3: printf("\n%d\n",(a[x-1])(8,5));
			break;

			case 4: return 0;
			default: printf("wrong choice, try again\n");  
		}
	}
	return 0;
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