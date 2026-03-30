#include<stdio.h>
#include<stdlib.h>


struct stack {
    int size;
    int top;
    int *s;
};

void create(struct stack *st) {
    printf("Enter the size of the stack: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
    if (st->s == NULL) {
        printf("Memory not allocated.\n");
        free(st->s);
        exit(1);
    }
}

void display(struct stack *st) {
    int i;
    for (i = st->top; i >= 0; i--) {
        printf("%d ", st->s[i]);
    }
    printf("\n");
}

void push(struct stack *st, int x) {
    if (st->top == st->size - 1) {
        printf("Stack overflow\n");
        return;
    }
    st->top++;
    st->s[st->top] = x;
}

int pop(struct stack *st) {
    if (st->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return st->s[st->top--];
}

int isfull(struct stack *st) {
    return (st->top == st->size - 1);
}

int isempty(struct stack *st) {
    return (st->top == -1);
}

int peek(struct stack *st) {
    if (isempty(st)) {
        printf("Stack underflow\n");
        return -1;
    }
    return st->s[st->top];
}

