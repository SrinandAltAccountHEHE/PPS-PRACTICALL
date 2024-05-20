#include <stdio.h>

void displayArray(int[], int);

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array elements are:");
    displayArray(arr, size);
}

void displayArray(int arr[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", arr[i]);
    }
}