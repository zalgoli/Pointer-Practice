#include "SumArrayElements.h"

int SumArrayElements(int* arr, int size) {
	int sum = 0;
	int* start = arr;

	for (int i = 0; i < size; i++) {
		sum += *(start + i);
	}

	return sum;
}