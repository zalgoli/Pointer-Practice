#include "Swap.h"

// Function to swap the values of 2 integer variables using pointers
void swap(int* pA, int* pB) {
	int temp = 0;
	temp = *pA;
	*pA = *pB;
	*pB = temp;

}