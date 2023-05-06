#include <iostream>
#include "Create_2D_Array.h"


// Allocating memory for 2D Array
int** Create_2D_Array(int rows, int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	return arr;
}

// Filling 2D Array with user input
void Fill_2D_Array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cin >> arr[i][j];
		}
	}
}

// Printing 2D Array
void Print_2D_Array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j];
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}

// Releasing 2D Array from memory
void Release_2D_Array(int** arr, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	} 

	delete[] arr;
}