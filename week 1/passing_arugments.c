// write a program to demonstrate passing arguments on return value from functions 
#include <stdio.h>

int add(int, int);

int main() {
    int a, b, sum;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d", &b);
    sum = add(a, b);
    printf("The sum the numbers is: %d", sum);
}

int add(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum;
}