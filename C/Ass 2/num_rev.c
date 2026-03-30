#include<stdio.h>
# define SIZE 5

struct stack
{
	int top;
	int a[SIZE];
};


void push(struct stack *st ,char x)
{
	st->top++;
	st->a[st->top]=x;
}

char pop(struct stack*st)
{
	 return(st->a[st->top--]);
}

int main()
{
	int rev,n,n1;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	struct stack s1;
	s1.top=-1;
	
	rev=0;
	n1=n;
	
	while(n1>0)
	{
		rev=rev*10+(n1%10);
		n1=n1/10;
	}
	
	while(rev>0)
	{
		push(&s1,rev%10);
		rev=rev/10;
	}
	
	printf("Reversed number: ");
	while(s1.top!=-1)
	{
		printf("%d",pop(&s1));
	}
	
	printf("/n");
	
	return 0;
}


