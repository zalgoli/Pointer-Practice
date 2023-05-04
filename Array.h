#ifndef ARRAY_H
#define ARRAY_H

// Function to allocate memory for the array
int* createArray(int size);

// Function to free up memory from the array
void releaseArray(int* arr);

#endif // ARRAY_H