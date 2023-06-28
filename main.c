#include <stdio.h>
#include <stdlib.h>
#include "ricerca_esaustiva.h"
#include "ricerca_esaustiva_ottimizzata.h"
#include "ricerca_binaria_r.h"

int main() {
    int array1[] = {2, 4, 6, 3, 7, 9, 1, 5};
    int array2[] = {2, 4, 5, 6, 8, 9, 10, 11};
    printf("%d\n", ricerca_esaustiva(array1, 8, 5));
    printf("%d\n", ricerca_esaustiva_ottimizzata(array2, 8, 5));
    printf("%d\n", ricerca_binaria_r(array2, 0, 7, 5));
    return 0;
}