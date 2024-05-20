// program using realloc and free
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(3 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr = realloc(ptr, 5*sizeof(int));
    ptr[3] = 4;
    ptr[4] = 5;
    for(int i=0;i<5;i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
}