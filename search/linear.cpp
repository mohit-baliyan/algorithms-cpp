# include "linear.h"
# include <iostream>

int LinearSearch::search(int *list, int size, int item) {

    for (int i = 0; i < size; i++) {

        if (list[i] == item) {
            return i;
        }

    }

    return -1;

}