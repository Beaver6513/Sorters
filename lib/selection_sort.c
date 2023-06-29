#include "selection_sort.h"

int selection_sort(int array[], int N) {
    for(int j = 0 ; j < N - 1 ; j++) {
        int min = j;
        for(int i = j ; i < N ; i++) {
            if(array[i] < array[min]) {
                min = i;
            }
            if(j != min) swap(array, j, min);
        }
    }
    return 0;
}