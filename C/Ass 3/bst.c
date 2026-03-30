#include<stdio.h>
#include<stdlib.h>

struct tnode
{
    struct tnode *left;
    int data;
    struct tnode *right;
};

struct tnode *create(struct tnode *a, int n)
{
    int i;	
    struct tnode *r=NULL, *p=NULL, *q=NULL; 
    for(i=0; i<n; i++)
    {
        r=(struct tnode*)malloc(sizeof(struct tnode));
        r->left=r->right=NULL;
        printf("Enter the node data: ");
        scanf("%d",&r->data);
        
        if(a==NULL)
            a=r;
        else
        {
            p=a;
            while(p)
            {   
                q=p;
                if(r->data > p->data)
                    p=p->right;
                else
                    p=p->left;
            }
            
            if(r->data > q->data)
                q->right=r;
            else
                q->left=r;
        }
    }
    return a; 
}

void preorder(struct tnode *T)
{
    if(T)
    {
        printf("%d ", T->data); 
        preorder(T->left);
        preorder(T->right);     
    }
}

void inorder(struct tnode *T)
{
    if(T)
    {
        inorder(T->left); 
        printf("%d ", T->data);
        inorder(T->right);     
    }
}

void postorder(struct tnode *T)
{
    if(T)
    {
        postorder(T->left); 
        postorder(T->right);
        printf("%d ", T->data);     
    }
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct tnode *root = NULL;
    root = create(root, n);

    printf("Preorder: ");
    preorder(root);
    printf("\n");

    printf("Inorder: ");
    inorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    return 0;
}
