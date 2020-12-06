#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str1[] = "abcydefghijklmnopqrstuvwxyz";
	char str2[] = "1234567890";
	char str3[100];
	char str4[] = "dasdj1111AAAAA - ij@ji@DKKSJDMd2129mdDW";
	int i;
	int c_digits = 0, c_letters = 0, c_lower = 0, c_upper = 0;
	
	printf("str1 = %s\n",str1 );
	printf("str2 = %s\n",str2 );
	printf("str3 = %s\n\n",str3 );

	puts(str1);
	puts(str2);
	puts(str1 + 4); /*+4 bytes (each char is byte)*/

	printf("strlen(str1) = %d\n",strlen(str1));
	printf("strlen(str1) = %d\n",strlen(str2));
	printf("strcmp(str1,str2) = %d\n",strcmp(str1,str2)); /*cmp - compare*/
	printf("strcmp(str2,str2) = %d\n\n",strcmp(str2,str2)); 
	/*return 0 when str1 == str2*/
	/*return < 0 when str1 < str2*/
	/*return > 0 when str1 > str2*/
	/*str1 - str2*/
	/*read man strcmp*/
	printf("strncmp(str1 + 4, str2+1,3) = %d\n",strncmp(str1 + 4, str2+1,3));

	/*strcpy*/
	printf("what is the index of the first 'y'? = %d\n",strchr(str1,'y') - str1);
	printf("what is the index of the last 'y'? = %d\n\n",strrchr(str1,'y') - str1);
	/*same for strstr */

	puts(str4);
	for (i = 0; str4[i] ; ++i) /*while str4 is not null*/
	{
		c_digits += isdigit(str4[i])?1:0;
		c_letters += isalpha(str4[i])?1:0;
		c_lower += islower(str4[i])?1:0;
		c_upper += isupper(str4[i])?1:0;
	}

	printf("str4 has %d digits characters\n",c_digits );
	printf("str4 has %d letters characters\n",c_letters );
	printf("str4 has %d upper letters characters\n",c_lower );
	printf("str4 has %d lower letters characters\n",c_upper );
	return 0;
}