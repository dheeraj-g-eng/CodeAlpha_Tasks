#include<stdio.h>

void mergeSort(int a[], int l, int r) {
    if(l < r) {
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

void mergesort(int a[], int i, int m, int r)
{
    int i, j = m+1, k = 0, temp[50];
    while(i <=m && j <= r){
        temp[k++] = a[i] <= a[j] ? a[i++] : a[j++];
        while(i <= m) temp[k++] = a[i++];
        while(j <= r) temp[k++] = a[j++];
        for(i = 0; i < k; i++) a[i+1] = temp[i];

    }
}

int main() {
    int n, a[50];

    scanf("%d", &n);
    for(int i=0; i<n; i++) 
    {
    scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);

    for(int i=0; i<n; i++) 
    {
    printf("%d ", a[i]);
    }
}
