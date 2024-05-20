// write a program to implement a pointer to a structure
#include <stdio.h>

struct student {
    char name[50];
    int age;
};

int main() {
    struct student student;

    printf("Enter the details of student\n");
    printf("Name: ");
    scanf("%s", &student.name);
    printf("Age: ");
    scanf("%d", &student.age);

    struct student *ptr = &student;
    printf("The student details are\n");
    printf("%s\n", ptr->name);
    printf("%d", ptr->age);
}
