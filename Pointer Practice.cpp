#include <iostream>
#include "Swap.h"
#include "Array.h"
#include "Reverse_Array.h"

int main()
{
	int a = 5;
	int* pA = &a;
	int b = 3;
	int* pB = &b;

	std::cout << "\\\\ USING THE SWAP FUNCTION // " << std::endl;
	std::cout << "A is " << a << " and B is " << b << std::endl;
	swap(pA, pB);
	std::cout << "A is " << a << " and B is " << b << std::endl;

	std::cout << "\\\\ USING THE DYNAMIC ARRAY FUNCTIONS //" << std::endl;
	std::cout << "Now provide the number of elements you will input into your array: " << std::endl;
	int size;
	std::cin >> size;

	while (size < 1) {
		std::cout << "Invalid size, try again: " << std::endl;
		std::cin >> size;
	}

	int* arr = createArray(size);

	std::cout << "Input " << size << " elements for your array: " << std::endl;
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
	std::cout << "And the members of your array are as follows: " << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	reverseArray(arr, size);

	std::cout << "And even though no one's asked for this, here they are in reverse: " << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	releaseArray(arr);

	return 0;
}


