#include "bubble_sort.h"
#include "utils.h"

int bubble_sort(int array[], int N) {
    int changed = 0;
    for(int j = 0 ; (j < N - 1) && changed == 0 ; j++) {
        changed = 1;
        for(int i = N - 1 ; i > j ; i--) {
            if(array[i] < array[i - 1]) {
                swap(array, i, i - 1);
                changed = 0;
            }
        }
    }
    return 0;
}