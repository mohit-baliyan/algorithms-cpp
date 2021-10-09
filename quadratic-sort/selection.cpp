#include "selection.h"
#include <iostream>

void Selection::sort(int *list, int size) {

    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (list[min] > list[j]) {
                min = j;
            }
        }
        int tmp = list[i];
        list[i] = list[min];
        list[min] = tmp;
    }

}