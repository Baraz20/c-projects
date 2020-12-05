/*
this program removes all comments
Cases:
1. 
2. in string
3. in comment of this type / *
4. in comment of type //
5. in slash state
*/

#include <stdio.h>

enum status{
	OUT,		/*normal*/
	IN_STRING,	/*inside string*/
	LEFT_SLASH,	/*left slash*/
	IN_COMMENT,	/*in star comment*/
	RIGHT_STAR,	/*in right star comment*/
	IN_CPP_COM	/*specpic cpp comment*/
};

int main()
{
	int c;
	int state = OUT;
	while((c=getchar()) != EOF){
		switch(state){
			case OUT:
				if(c == '/'){
					state = LEFT_SLASH;
				} else {
					putchar(c);
					if(c == '\"'){
						state = IN_STRING;
					}
				}
				break;
			case LEFT_SLASH:
				if(c == '*'){
					state = IN_COMMENT;
				} else if(c == '/'){
					state = IN_CPP_COM;
				} else{
					putchar('/');
					putchar(c);
					state = OUT;
				}
				break;
			case IN_COMMENT:
				if(c == '*'){
					state = RIGHT_STAR;
				}
				break;
			case IN_CPP_COM:
				if(c == '\n'){
					state = OUT;
					putchar(c);
				}
				break;
			case RIGHT_STAR:
				if(c == '/'){
					state = OUT;
				} else if(c != '*'){
					state = IN_COMMENT;
				}
				break;
			case IN_STRING:
				if(c == '\"'){
					state = OUT;
				}
				putchar(c);
				break;
		}
	}
	return 0;
}