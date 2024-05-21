#include <stdio.h>

struct worker {
    char name[50];
    float hours_worked;
    float hourly_rate;
};

int main() {
    struct worker worker1, worker2;
    printf("Enter details for worker 1:\n");
    printf("Name:");
    scanf("%s", worker1.name);
    printf("Hours worked:");
    scanf("%f", &worker1.hours_worked);
    printf("Hourly rate:");
    scanf("%f", &worker1.hourly_rate);

    printf("Enter details for worker 2:\n");
    printf("Name:");
    scanf("%s", worker2.name);
    printf("Hours worked:");
    scanf("%f", &worker2.hours_worked);
    printf("Hourly rate:");
    scanf("%f", &worker2.hourly_rate);

    float total_payment1 = worker1.hours_worked * worker1.hourly_rate;
    float total_payment2 = worker2.hours_worked * worker2.hourly_rate;

    printf("Total payment for %s is %f\n", worker1.name, total_payment1);
    printf("Total payment for %s is %f\n", worker2.name, total_payment2);
}