#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void push();
void pop();
void display();

int main() {
    int choice;
    printf("Stack Implementation\n");
    while(1) {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Enter valid choice\n");
        }
    }

}

void push() {
    if(top == SIZE-1) {
        printf("Stack overflow!\n");
        return;
    }
    printf("Enter the number you want to push: ");
    scanf("%d", &stack[++top]);
}
void pop() {
    if(top == -1) {
        printf("Stack underflow!\n");
        return;
    }
    top--;
}

void display() {
    for(int i=0;i<=top;i++) {
        printf("%d\n", stack[i]);
    }
    printf("\n");
}
