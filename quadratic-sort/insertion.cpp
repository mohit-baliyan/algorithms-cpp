#include "insertion.h"
#include <iostream>

void Insertion::sort(int *list, int size) {

    int j;
    int item;
    for (int i = 1; i < size; i++) {

        item = list[i];
        j = i - 1;
        while (j > -1 && item < list[j]) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = item;

    }

}