//write a prograrm to demonstrate a program using call by value
#include <stdio.h>

void swap(int, int);

int main() {
    int a = 5;
    int b = 7;
    printf("Before swapping: \n");
    printf("a=%d, b=%d", a, b);
    swap(a, b);
    printf("\nAfter swapping doesn't change the original variable: \n");
    printf("a=%d, b=%d", a, b);
}

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}