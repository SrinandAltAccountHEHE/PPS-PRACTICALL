// write a program to read numbers from a file
#include <stdio.h>

int main() {
    int a, b, sum;
    FILE *fp = fopen("nums.txt", "r");
    fscanf(fp, "%d %d", &a, &b);
    sum = a+b;

    printf("%d", sum);
}