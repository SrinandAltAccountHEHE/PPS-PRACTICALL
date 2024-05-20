//write a program to read records of 3 different students in structure having name, roll no and marks and display it
#include <stdio.h>

struct student {
    int name[50];
    int roll;
    int marks;
};

int main() {
    struct student students[3];
    for(int i=0;i<3;i++) {
        printf("Enter the details of student %d\n", i+1);
        printf("Name:");
        scanf("%s", &students[i].name);
        printf("Roll number:");
        scanf("%d", &students[i].roll);
        printf("Marks:");
        scanf("%d", &students[i].marks);
    }

    for(int i=0;i<3;i++) {
        printf("Student details are\n");
        printf("Student %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll);
        printf("Marks: %d\n", students[i].marks);
    }


}