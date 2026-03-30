#include<stdio.h>

#include "stackrev.h"


int main()
{
	struct stack t;
	char str[100];
	init(&t);
	
	printf("Enter a string: ");
	gets(str);
	
	reverse(&t,str);
	printf("Reversed string:%s\n",str);
	return 0;
}			
