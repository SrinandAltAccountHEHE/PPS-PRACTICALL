// program usig calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = calloc(2, sizeof(int));
    if(ptr == NULL) {
        printf("Memory not allocated");
    } else {
        printf("Memory is allocated using malloc");
    }
}