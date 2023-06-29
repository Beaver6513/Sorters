#include "insertion_sort.h"

int insertion_sort(int array[], int N) {
    int i = 0;
    for(int j = 1 ; j < N ; j++) {
        int temp = array[j];
        for(i = j - 1 ; i >= 0 && array[i] > temp ; i--) {
            array[i + 1] = array[i];
        }
        if(j != i + 1) array[i + 1] = temp;
    }
    return 0;
}