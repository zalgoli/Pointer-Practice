#include "Array.h"

// Function to dynamically allocate memory for an array
int* createArray(int size) {

	int* arr = new int[size];
	return arr;
}


// Function to release the memory allocated for an array of dynamic size
void releaseArray(int* arr) {

	delete[] arr;

}