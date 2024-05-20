// progrma using malloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = malloc(2*sizeof(int *));
    if(ptr == NULL) {
        printf("Memory not allocated");
    } else {
        printf("Memory is allocated using malloc");
    }
}