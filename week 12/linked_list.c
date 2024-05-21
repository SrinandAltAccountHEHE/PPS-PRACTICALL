#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;

void beginInsert();
void beginDelete();
void search();
void display();

int main() {
    int choice;
    printf("Linked list implementation\n");
    while(1) {
        printf("1.Begin insert\n");
        printf("2.Begin delete\n");
        printf("3.Search\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                beginInsert();
                break;
            case 2:
                beginDelete();
                break;
            case 3:
                search();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default: 
                printf("Invalid choice\n");
            
        }
    }
}

void beginInsert() {
    int data;
    printf("Enter the number you want to insert: ");
    scanf("%d", &data);
    struct node *new_node = malloc(sizeof(struct node *));
    new_node->data = data;
    new_node->next = head;
    head = new_node;


}

void beginDelete() {
	struct node *ptr = head;
	head = head->next;
	free(ptr);
}

void search() {

}

void display() {
    struct node *temp = head;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
