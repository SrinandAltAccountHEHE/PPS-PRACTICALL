// program to read info o student. it contains name, roll number, birthday , admission date.
// calculate age of student at the time of admission (nested structure)
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    int roll;
    struct date birthday;
    struct date admission_date;
};

int calculateAge(struct student);

int main() {
    struct student student;
    printf("Enter student details\n");
    printf("Name: ");
    scanf("%s", student.name);
    printf("Roll: ");
    scanf("%d", &student.roll);
    printf("Birthday(DD MM YYYY)");
    scanf("%d %d %d", &student.birthday.day, &student.birthday.month, &student.birthday.year);
    printf("Admission Date(DD MM YYYY)");
    scanf("%d %d %d", &student.admission_date.day, &student.admission_date.month, &student.admission_date.year);

    int age = calculateAge(student);
    printf("The student was %d years old at the time of admission", age);
}

int calculateAge(struct student student) {
    int age = student.admission_date.year - student.birthday.year;
    return age;
}