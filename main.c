#include <stdio.h>
#include <stdlib.h>
#include "ricerca_esaustiva.h"
#include "ricerca_esaustiva_ottimizzata.h"
#include "ricerca_binaria_r.h"
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "shell_sort.h"

int main() {
    int array1[] = {2, 4, 6, 3, 7, 92, 1, 5};
    int array2[] = {2, 4, 5, 6, 8, 9, 10, 11};
    
    printf("%d\n", ricerca_esaustiva(array1, 8, 5));
    printf("%d\n", ricerca_esaustiva_ottimizzata(array2, 8, 5));
    printf("%d\n", ricerca_binaria_r(array2, 0, 7, 5));

    bubble_sort(array1, 8);

    int array3[] = {3, 1, 12, 34, 23, 45, 54, 11};
    selection_sort(array3, 8);

    int array4[] = {3, 1, 12, 34, 23, 45, 54, 11};
    insertion_sort(array4, 8);

    int array5[] = {3, 1, 12, 34, 23, 45, 54, 11};
    shell_sort(array5, 8);

    print_array(array1, 8);
    print_array(array3, 8);
    print_array(array4, 8);
    print_array(array5, 8);
    return 0;
}