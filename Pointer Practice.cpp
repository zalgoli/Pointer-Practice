#include <iostream>
#include "Swap.h"
#include "Array.h"
#include "Reverse_Array.h"
#include "SumArrayElements.h"
#include "FindMinAndMax.h"
#include "Create_2D_Array.h"
#include "Matrix_Multiplication.h"

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
	std::cout << std::endl;

	std::cout << "The sum of the array elements is " << SumArrayElements(arr, size) << std::endl;

	int* min = &arr[0];
	int* max = &arr[0];
	FindMinAndMax(arr, size, min, max);
	
	std::cout << "The minimum in your array is " << *min << " and the maximum is " << *max << std::endl;

	releaseArray(arr);

	// 2D-Arrays

	std::cout << "\n\\\\ USING THE 2D-ARRAY FUNCTIONS // " << std::endl;
	std::cout << "Now define the number of rows and columns you would like to have for a 2D-Array: " << std::endl;
	
	int rows1, cols1;
	std::cout << "Number of rows: " << std::endl;
	std::cin >> rows1;

	std::cout << "Number of columns: " << std::endl;
	std::cin >> cols1;

	int** arr2_1 = Create_2D_Array(rows1, cols1);
	std::cout << "Now provide " << cols1 *rows1 << " numbers as input for the 2D Array: " << std::endl;
	Fill_2D_Array(arr2_1, rows1, cols1);

	std::cout << "See your 2D Array below: " << std::endl;
	Print_2D_Array(arr2_1, rows1, cols1);

	std::cout << "Now define the number of rows and columns you would like to have for a 2D-Array: " << std::endl;

	int rows2, cols2;
	std::cout << "Number of rows: " << std::endl;
	std::cin >> rows2;

	std::cout << "Number of columns: " << std::endl;
	std::cin >> cols2;

	int** arr2_2 = Create_2D_Array(rows2, cols2);
	std::cout << "Now provide " << cols2 * rows2 << " numbers as input for the 2D Array: " << std::endl;
	Fill_2D_Array(arr2_2, rows2, cols2);

	std::cout << "See your 2D Array below: " << std::endl;
	Print_2D_Array(arr2_2, rows2, cols2);

	std::cout << "Finally, here is the result of multiplying these 2 matrices together: " << std::endl;
	int** result = matrix_multiply(arr2_1, arr2_2, rows1, cols1, rows2, cols2);
	Print_2D_Array(result, rows1, cols2);


	// Releasing 2D Arrays from memory
	Release_2D_Array(result, rows1);
	Release_2D_Array(arr2_1, rows1);
	Release_2D_Array(arr2_2, rows2);




	return 0;
}


