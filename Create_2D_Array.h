#ifndef CREATE_2D_ARRAY_H
#define CREATE_2D_ARRAY_H

int** Create_2D_Array(int rows, int cols);
void Fill_2D_Array(int** arr, int rows, int cols);
void Print_2D_Array(int** arr, int rows, int cols);
void Release_2D_Array(int** arr, int rows);

#endif // CREATE_2D_ARRAY_H