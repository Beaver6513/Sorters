#include "ricerca_esaustiva_ottimizzata.h"

int ricerca_esaustiva_ottimizzata(int array[], int N, int key) {
    for(int i = 0 ; i < N && array[i] <= key ; i++) {
        if(array[i] == key) return i;
    }
    return -1;
}