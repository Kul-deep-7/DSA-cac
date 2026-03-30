#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*list,*p,*q;

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
        {
        	q=list=p;
        	p->next=p;
        }
        else
        {
        	p->next=q->next;
        	q->next=p;
        	q=p;
        }
    }
}

void display()
{
    struct node *temp=list;
    do{
        printf("%d --->\t",temp->data);
        temp=temp->next;
    }
    while(temp!=list);
    printf("NULL\n\n");
}
	
void insert(int pos) 
{
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter new node data: ");
    scanf("%d",&p->data);
    p->next=0;
    if(pos==1)
    {
        q->next=p;
        p->next=list;
        list=p;
    }
    else
    {
        struct node *temp=list;
        for(int i=1;i<pos-1;i++)
            temp=temp->next;
        p->next=temp->next;
        temp->next=p;
        if(pos==n+1)
        	q=p;
    }
    n++;
}      

void delete(int pos)
{
    if(pos==1)
    {
        p=list;
        if(list->next==list)
            list=0;
        else
        {
            list=list->next;
            q->next=list;
        }
    }
    else{
        struct node *temp=list;
        for(int i=1;i<pos-1;i++)
            temp=temp->next;
        p=temp->next;
        temp->next=p->next;
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
        printf("\n1.Display\n");
        printf("2.Insert\n");
        printf("3.Delete\n");
        printf("4.Exit\n");
    
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {   
            case 1: 
            if(list==0)
                printf("Singly Linked link is empty\n");
            else
                display();
            break;

            case 2:
            printf("Enter position: ");
            scanf("%d",&pos);
            if(pos>=1 && pos<=n+1)
                insert(pos);
            else
                printf("Invalid");
            break;

            case 3: 
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

            case 4: 
            exit(1);
            break;
        }
    }while(ch>=0 && ch<5);
    return 0;
}
