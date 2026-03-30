#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*list,*p,*q,*last;

int n;
	
void create()
{
    int i;
    for(i=1;i<=n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("Enter %d data\n",i);
        scanf("%d",&p->data);
        p->next=0;
        if(list==0)
            list=last=p;
        else
        {
            last->next=p;
            last=p;
        }
    }
}

void display()
{
    struct node *temp=list;
    while(temp)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void insert(int pos)
{
    int i;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted at %d\t",pos);
    scanf("%d",&p->data);
    p->next=0;
    if(pos==1)
    {
        p->next=list;
        list=p;
    }
    else
    {
        q=list;
        for(i=1;i<pos-1;i++)
            q=q->next;
        p->next=q->next;
        q->next=p;
    }
}

void delete(int pos)
{
    int i;
    if(pos==-1)
        list=p->next;
    else
    {
        q=list;
        for(i=1;i<=-1;i++)
            q=q->next;
        p=q->next;
        q->next=p->next;
    }
    p->next=0;
    printf("%d\n",p->data);
    free(p);
    p=0;
}

int main()
{
    int ch,pos;
    do{
        printf("Enter no. of nodes: ");
        scanf("%d",&n);
    }while(n<1);

    create();

    do{
        printf("\n1.Insert\n");
        printf("2.Display\n");
        printf("3.Delete\n");
        printf("4.Exit\n");
    

        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {   
            case 1: 
		    printf("Enter position: ");
		    scanf("%d",&pos);
		    if(pos>=1 && pos<=n+1)
		        insert(pos);
		    else
		        printf("Invalid position");
		    break;

            case 2:
		    if(list==0)
		        printf("list is empty");
		    else
		        display();
		    break;

            case 3:
		    printf("Enter position: ");
		    scanf("%d",&pos);
		    if(pos>=1 && pos<=n)
		        delete(pos);
		    else
		        printf("Invalid position");
		    break;

            case 4:
		    exit(1);
		    break;
        }
    }while(ch>0 && ch<=4);
    return 0;
}
