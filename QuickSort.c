#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int pv = arr[low], i = low, j = high, temp;
    while (i < j) {
        while (arr[i] <= pv && i < high) i++;
        while (arr[j] > pv) j--;
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = pv;
    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}

int main() {
    int n, arr[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
