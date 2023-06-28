#include "ricerca_binaria_r.h"

int ricerca_binaria_r(int array[], int low, int high, int key) {
    int mid = low + (high - low) / 2;

    if(array[mid] == key) return mid;
    if(low == high) return -1;

    if(key < array[mid]) return ricerca_binaria_r(array, low, mid - 1, key);
    if(key > array[mid]) return ricerca_binaria_r(array, mid + 1, high, key);
}