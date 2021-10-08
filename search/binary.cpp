# include "binary.h"
# include <iostream>

int BinarySearch::search(int *list, int size, int item) {

    int left = 0;
    int right = size - 1;
    int mid;
    while (left <= right) {

        mid = (right - left) / 2 + left;
        if (list[mid] == item) {
            return mid;
        } else if (list[mid] > item) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }

    }

    return -1;

}