#include <stdio.h>
#include"stk.h"

int main() {
    struct stack t;
    int n, choice;
   init(&t);

    do {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (isfull(&t)) {
                    printf("Stack overflow\n");
                } else {
                    printf("Enter the element: ");
                    scanf("%d", &n);
                    push(&t, n);
                }
                break;

            case 2:
                if (isempty(&t)) {
                    printf("Stack underflow\n");
                } else {
                    printf("The popped element is: %d\n", pop(&t));
                }
                break;

            case 3:
                if (isempty(&t)) {
                    printf("Stack underflow\n");
                } else {
                    printf("The topmost element is: %d\n", peek(&t));
                }
                break;

            case 4:
                display(&t);
                break;

        }
    } while (choice>0 && choice<5);

    free(t.s);
    return 0;
}
