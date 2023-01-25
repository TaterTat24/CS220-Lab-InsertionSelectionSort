/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Selection  / Insertion Sorts
 * ===========================================================
 */
#ifndef SORT_H
#define SORT_H

// constant representing size of input
#define N 8

/** -------------------------------------------------------------------
 * @brief Fills an array with random values between 0 and 29
 * @param array - the array to fill
 * @pre numbers has been allocated
 * @post array is filled with random numbers
 */
void fillArray(int array[]);

/** -------------------------------------------------------------------
 * @brief Prints an array
 * @param nums - the array to print
 * @pre numbers has been allocated and initialized
 * @post array is printed nums is unmodified
 */
void printArray(int nums[]);

/** -------------------------------------------------------------------
 * @brief Perform an selection sort on an array
 * @param numbers - the array to sort
 * @param numberSize - the size of the array to sort
 * @pre numbers[] contains data numberSize contains # of items
 * @post numbers[] is sorted in ascending order
 */
void selectionSort(int numbers[], int numbersSize);

/** -------------------------------------------------------------------
 * @brief Perform an insertion sort on an array
 * @param numbers - the array to sort
 * @param numberSize - the size of the array to sort
 * @pre numbers[] contains data numberSize contains # of items
 * @post numbers[] is sorted in ascending order
 */
void insertionSort(int numbers[], int numbersSize);

#endif  