#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = 0, rear = -1;

void enqueue();
void dequeue();
void display();

int main() {
    int choice;
    printf("Queue Implementation\n");
    while(1) {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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

void enqueue() {
    if(rear == SIZE-1) {
        printf("Queue limit reached\n");
        return;
    }
    printf("Enter the number you want to insert: ");
    scanf("%d", &queue[++rear]);
}

void dequeue() {
    if(front > rear) {
        printf("Queue is empty\n");
        return;
    }
    front++;
}

void display() {
    for(int i=front;i<=rear;i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}