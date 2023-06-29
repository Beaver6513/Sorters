#include "shell_sort.h"

int shell_sort(int array[], int N) {
    int distances[] = {9, 5, 3, 2, 1};

    for(int k = 0 ; k < 5 ; k++) {
        int d = distances[k];
        int i = 0;
        for(int j = d ; j < N ; j++) {
            int temp = array[j];
            for(i = j - d ; i >= 0 && array[i] > temp ; i -= d) {
                array[i + d] = array[i];
            }
            if(j != i + d) array[i + d] = temp;
        }
    }

    return 0;
}