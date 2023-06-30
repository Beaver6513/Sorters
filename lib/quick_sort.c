#include "quick_sort.h"
#include "utils.h"

int partition(int array[], int l, int r) {
    int pivot = array[r];
    int i = l, j = r - 1;
    while(i < j) {
        while(array[i] < pivot) i++;
        while(array[j] > pivot && j > l) j--;
        if(i < j) swap(array, i, j);
    }
    if(r != i && array[i] > array[r]) swap(array, i, r);
    return i;
}

int quick_sort(int array[], int l, int r) {
    if(r <= l) return 0;
    int i = partition(array, l, r);
    quick_sort(array, l, i - 1);
    quick_sort(array, i + 1, r);
    return 0;
}
