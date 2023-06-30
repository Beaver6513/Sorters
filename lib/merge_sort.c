#include "merge_sort.h"
#include <stdio.h>
#include <stdlib.h>

int* merge_2_vie(int a[], int N , int b[], int M) {
    int i = 0, j = 0, k = 0;
    int* c = (int*)malloc(sizeof(int) * (N + M));
    while(k < N + M) {
        if(i == N) {
            c[k] = b[j]; j++;
        } else if(j == M) {
            c[k] = a[i]; i++;
        } else if(a[i] < b[j]) {
            c[k] = a[i]; i++;
        } else {
            c[k] = b[j]; j++;
        }
        k++;
    }
    return c;
}

int merge_sort(int array[], int l, int r) {
    if (l == r) return;
    int m = (l + r) / 2;
    merge_sort(array, l, m);
    merge_sort(array, m + 1, r);
    int* c = merge_2_vie(&(array[l]), (m - l) + 1, &(array[m + 1]), r - m);
    for(int i = 0 ; i < r - l + 1 ; i++) array[l + i] = c[i];
    free(c);
    return 0;
}