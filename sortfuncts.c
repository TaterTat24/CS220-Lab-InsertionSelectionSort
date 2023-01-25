/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Selection / Insertion Sorts
 * ===========================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "sortfuncts.h"

void fillArray(int array[]) {
    // fill array with random ints from 0 to 29
    for (int i = 0; i < N; i++) {
        array[i] = (int)random() % 30;
    }
}

void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void insertionSort(int list[], int numberItems) {
    int i = 1;
    while (i < numberItems) {
        int j = i;
        // insert the i-th item into its correct
        // position in the sorted part of the list
        while (j > 0 && list[j - 1] > list[j]) {
            // swap data at list[j] and list[j-1]
            int temp = list[j];
            list[j] = list[j - 1];
            list[j - 1] = temp;
            j = j - 1;
        }
        i = i + 1;
    }
    
}

void selectionSort(int list[], int numberItems) {
    int smallestIndex;
    // find index of smallest item in remaining
    // part of list (i+1 to n-1)
    for (int i = 0; i < numberItems; i++) {
        smallestIndex = i;
        for (int j = i + 1; j < numberItems; j++) {
            if (list[j] < list[smallestIndex]) {
                smallestIndex = j;
            }
        }
    // swap data at smallestIndex data in list[i]
    int temp = list[i];
    list[i] = list[smallestIndex];
    list[smallestIndex] = temp;
    }
}