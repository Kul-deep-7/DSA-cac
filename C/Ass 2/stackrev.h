#include<stdio.h>
# define SIZE 5

struct stack
{
	int top;
	int a[SIZE];
};

void init(struct stack *st)
{
	st->top=-1;
}

void display(struct stack *st)
{
	int i;
	for(i=st->top;i>=0;i--)
		printf("%d\n", st->a[i]);
	printf("\n");
}

void push(struct stack *st ,char x)
{

	st->top++;
	st->a[st->top]=x;

}

char pop(struct stack*st)
{
	 return(st->a[st->top--]);
}	

int isFull(struct stack *st)
{
	return st->top==SIZE-1;
}

int isEmpty(struct stack *st)
{
	return st->top==-1;
}

char peek(struct stack *st)
{
	return (st->a[st->top]);
}

void reverse(struct stack *st ,  char str[])
{
	int i;
	for(i=0 ; str[i]!=0;i++)
	{
		push(st,str[i]);
	}
	
	for(i=0 ; !isEmpty(st); i++)
	{
		str[i]=pop(st);
	}
}		


