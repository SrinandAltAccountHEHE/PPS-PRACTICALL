#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("The sorted array is: ");
    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
}