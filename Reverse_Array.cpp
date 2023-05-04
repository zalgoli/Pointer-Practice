void reverseArray(int* arr, int size) {

	int* pStart = arr; // Directly assign the arr pointer to pStart
	int* pEnd = arr + size - 1; // Assign the pointer to the last element to pEnd


	//Iterating over the pointers in the function from both ends until they cross over
	// each other, at which point we've reversed the array.
	while (pStart < pEnd) {
		int temp;
		temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}
}