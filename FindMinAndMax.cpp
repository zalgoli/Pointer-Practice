#include "FindMinAndMax.h"

void FindMinAndMax(int* arr, int size, int* &min, int* &max) {
    min = &arr[0];
    max = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) max = &arr[i];
        if (arr[i] < *min) min = &arr[i];
    }
}
