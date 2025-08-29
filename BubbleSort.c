#include <stdio.h>

int main() {
    int arr[] = {35, 42, 18, 63, 31};
    int n = 5, temp;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    return 0;
}

