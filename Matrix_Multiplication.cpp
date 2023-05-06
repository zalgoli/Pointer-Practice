#include "Matrix_Multiplication.h"

int** matrix_multiply(int** matrix1, int** matrix2, int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        return nullptr;
    }

    // Allocate memory for the result matrix
    int** result = new int* [rows1];
    for (int i = 0; i < rows1; i++) {
        result[i] = new int[cols2];
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // Initialize the result element to 0
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}
