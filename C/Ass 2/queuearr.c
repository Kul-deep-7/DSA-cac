#include<stdio.h>
#define SIZE 10

struct queue
{
	int front;
	int rear;
	int Q[SIZE];
};

void init(struct queue *q)
{
	q->front=q->rear=-1;
}

void enqueue(struct queue *q,int x)
{
	if(q->rear==SIZE-1)
		printf("Queue is full");
	else
	{
		q->rear++;
		q->Q[q->rear]=x;
	}
}

int dequeue(struct queue *q)
{
	int x=-1;
	if(q->front==q->rear)
		printf("Queue is empty");
		
	else{
	
		q->front++;
		x=q->Q[q->front];
	     }
	     
	     return x;
}

int display(struct queue *q)
{
	int i;
	for(i=q->front ; i<=q->rear; i++)
		printf("%d\n" , q->Q[i]);
	printf("\n");
}

int isFull(struct queue*q)
{
	return q->rear==SIZE-1;
}

int isEmpty(struct queue *q)
{
	return q->front==q->rear;
}		

int main()
{
	struct queue q;
	int n , choice;
	init(&q);
	
	do
	{
		printf("\n1:enqueue\n2:dequeue\n3:display\n4:exit\n");
		printf("Enter your choice :\n");
		scanf("%d",&choice);
		switch(choice)
		
		{
			
			case 1:/*enqueue*/
				if(isFull(&q))
					printf("queue overflow");
				else
				{
					printf("Enter the element to be inserted\n");
					scanf("%d" , &n);
					enqueue(&q,n);
				}
			break;
			
			case 2:/*dequeue*/
				if(isEmpty(&q))
					printf("\n queue underflow\n");
					
				else
				{
				  printf("element deleted is :%d\n",dequeue(&q));
				  break;
				 }
				
			case 3:/*display*/
				display(&q);
				break;
				
		}	
	}while(choice!=4);
}				  			     						
		
