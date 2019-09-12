/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief simple statistics functions
 *
 * <Add Extended Description Here>
 *
 * @author Nam Le Hoang
 * @date Aug 19th, 2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Data array:\n");
  print_array(test, SIZE);
  printf("Statistic of data array:\n");
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array, unsigned int size) {
    unsigned char min = find_minimum(array, size);
    unsigned char max = find_maximum(array, size);
    float mean = find_mean(array, size);
    float median = find_median(array, size);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean:    %.1f\n", mean);
    printf("Median:  %.1f\n", median);
}

void print_array(unsigned char* array, unsigned int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d ]\n", array[size - 1]);
}

float find_median(unsigned char* array, unsigned int size) {
    unsigned char* sorted_array = sort_array(array, size);
    
    if (size % 2 == 0) {
        return (sorted_array[size / 2] + sorted_array[size / 2 - 1]) / 2.0;
    } else {
        return sorted_array[size / 2];
    }
}

float find_mean(unsigned char* array, unsigned int size) {
    float mean = 0.0;
    for (int i = 0; i < size; i++) {
        mean += array[i];
    }

    return mean / size;
}

unsigned char find_maximum(unsigned char* array, unsigned int size) {
    unsigned char max = array[0];
    for (int i = 1; i < size; i++) {
        if (max < array[i]) {
	    max = array[i];
	}
    }

    return max;
}

unsigned char find_minimum(unsigned char* array, unsigned int size) {
    unsigned char min = array[0];
    for (int i = 1; i < size; i++) {
        if (min > array[i]) {
	    min = array[i];
	}
    }

    return min;
}

unsigned char* sort_array(unsigned char* array, unsigned int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (size - i - 1); j++) {
	    if (array[j] < array[j + 1]) {
	        unsigned char temp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = temp;
	    }
	}
    }

    return array;
}

