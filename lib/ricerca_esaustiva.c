#include "ricerca_esaustiva.h"

int ricerca_esaustiva(int array[], int N, int key) {
    for(int i = 0 ; i < N ; i++) {
        if(array[i] == key) return i;
    }
    return -1;
}