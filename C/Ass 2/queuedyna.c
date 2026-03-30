#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}* front=NULL , *rear=NULL;


void enqueue(int x)
{
	struct Node*t;
	t=(struct Node*) malloc (sizeof(struct Node));
	
	if(t==NULL)
	printf("Queue is full");
	
	else
	{
		t->data=x;
		t->next=NULL;
		if(front==NULL)
			front=rear=t;
		else
		{
			rear->next=t;
			rear=t;
		}
	}
}

int dequeue()
{

	int x=-1;
	struct Node*p;
	if(front==NULL)
		printf("Queue is empty\n");
	else
	{
		p=front;
		front=front->next;
		x=p->data;
		free(p);
	}
	
	return x;
}

int isEmpty()
{
	return(front==NULL);
}




void display()
{
	struct Node*p=front;
	while(p)
	{
		printf("%d\n", p->data);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	int choice ,n;
	
	do{
	
	  printf("\n1: ENQUEUE \n2: DEQUEUE \n3:DISPLAY \n4:EXIT ");
	  printf("\nEnter Your Choice:");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	  
	  	case 1:/*ENQUEUE*/
	  		printf("\n Enter the element to  be inserted:");
	  		scanf("%d", &n);
	  		enqueue(n);
	  		break;
	  		
	  	
	  		
	  	case 2:/*DEQUEUE*/
	  		if(isEmpty())
	  			printf("\n Queue is empty");
	  		else
	  		printf("\n  element deleted is %d", dequeue());
	  		break;	
	  		
	  		
	  	case 3:/*DISPLAY*/
	  		display();
	  		break;	
	  		
	  		
	 }
	}while(choice!=4);
}	  		
	  		
	  	
			
								
