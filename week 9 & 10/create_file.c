// write a program to create a file
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    if(fptr == NULL) {
        printf("The file did not get created please cry to death");
        return 0;
    } else {
        printf("The file is created successfully");
    }

}