#include "bubble.h"
#include <iostream>

using namespace std;

void Bubble::sort(int *list, int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int tmp = list[j + 1];
                list[j + 1] = list[j];
                list[j] = tmp;
            }
        }
    }
}