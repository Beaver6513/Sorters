#include "utils.h"
#include <stdio.h>

void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void print_array(int array[], int N) {
    printf("\n");
    for(int i = 0 ; i < N ; i++) printf("%d ",array[i]);
}