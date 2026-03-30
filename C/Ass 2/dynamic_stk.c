#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*top=NULL;

void display()
{
	struct Node*p;
	p=top;
	while(p!=NULL)
	{
		printf("%d\n", p->data);
		p=p->next;
	}
	printf("\n");	

}


void push(int x)
{
	struct Node*t;
	t=(struct Node*) malloc(sizeof(struct Node));
	
		t->data=x;
		t->next=top;
		top=t;
	
}

int pop()
{
	struct Node*t;
	int x=-1;
	t=top;
	top=top->next;
	x=t->data;
	free(t);
	
	return x;
}

int isEmpty()
{
	return(top==NULL);
}

int peek()
{
	return(top->data);
		
}		



int main()
{
	int choice,n;
	
	do
	{
	  printf("\n1: PUSH \n2: POP \n3:PEEK \n4:DISPLAY \n5:EXIT");
	  printf("\nEnter Your Choice:");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	  	
	  	case 1:/*PUSH*/
	  		printf("\n Enter the element to  be pushed:");
	  		scanf("%d", &n);
	  		push(n);
	  		break;
	  	
	  	case 2:/*POP*/
	  		if(isEmpty())
	  			printf("\n Stack is empty");
	  		else
	  		printf("\n popped element is %d", pop());
	  		break;
	  		
	  	case 3:/*PEEK*/
	  		if(isEmpty())
	  			printf("\n Stack is Empty");
	  		else
	  			printf("\n Topmost Element is %d", peek());
	  		break;
	  		
	  	case 4:/*DISPLAY*/
	  		display();
	  		break;
	  }
	  
	  }while(choice!=5);
}				
	  						
				
