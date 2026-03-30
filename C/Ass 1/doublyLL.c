#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*list,*p,*q;

int i,n;

void create()
{
	int i;
	for(i=1;i<=n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->prev=p->next=0;
		printf("Enter %d data\n",i);
		scanf("%d",&p->data);
		
		if(list==0)
			list=q=p;
		else
		{
			q->next=p;
			p->prev=q;
			q=p;
		}
	}
}
	
void display()
{
	struct node *t=list;
	while(t)
	{
		printf("%d --->",t->data);
		t=t->next;
	}
	printf("NULL\n\n");
}
	
void rev_display()
{
	struct node *t=list;
	while(t->next)
		t=t->next;
	while(t!=list)
	{
		printf("%d --->",t->data);
		t=t->prev;
	}
	printf("%d\n",t->data);
}

void insert(int pos)
{
	struct node *t=list;
	p=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&p->data);
	p->next=0;
	if(pos==1)
	{
		p->next=list;
		if(list!=0)
			list->prev=p;
		list=p;
	}
	else
	{
		t=list;
		for(i=1;i<pos-1;i++)
			t=t->next;
			p->next=t->next;
			if(t->next!=0)
				(t->next)->prev=p;
				t->next=p;
				p->prev=t;
	}
	n++;	
}

void delete(int pos)
{
	if(pos==1)
	{
		p=list;
		list=list->next;
		if(list!=0)
			list->prev=0;
	}
	else
	{
		q=list;
		for(i=1;i<pos-1;i++)
			q=q->next;
			p=q->next;
			q->next=p->next;
			if(p->next)
				(p->next)->prev=q;
	}
	
			p->next=p->prev=0;
			printf("%d",p->data);
			free(p);
			p=0;
			n--;
}

int main()
{
    int ch,pos;
    do{
        printf("Enter no. of nodes: \n");
        scanf("%d",&n);
    }while(n<1);

    create();

    do{
        printf("\n1.Forward Display\n");
        printf("2.Reverse Display\n");
        printf("3.Insert\n");
        printf("4.Delete\n");
        printf("5.Exit\n");
    
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {   
            case 1: 
            if(list==0)
                printf("Doubly Linked link is empty\n");
            else
                display();
            break;
            
            case 2:
            if(list==0)
            	 printf("Doubly Linked link is empty\n");
            else
            	rev_display();
            break;	
            
	    case 3:
	    printf("Enter position: ");
            scanf("%d",&pos);
            if(pos>=1 && pos<=n+1)
                insert(pos);
            else
                printf("Invalid");
            break;
            
            case 4:
            if(list==0)
                printf("Doubly Linked link is empty\n");
            else
            printf("Enter position: ");
            scanf("%d",&pos);
            if(pos>=1 && pos<n)
            {
                delete(pos);
                printf("value is deleted");
            }
            else
                printf("position is invalid");
            break;
            
            case 5: 
            exit(0);
            break;
        }
    }while(ch>0 && ch<6);
    return 0;
}   
