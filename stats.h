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
 * @file stats.h 
 * @brief Declarations and functions
 *
 * <Add Extended Description Here>
 *
 * @author Nam Le Hoang
 * @date Aug 19th, 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print the statistics of an array including minimum, maximum, mean and median
 *
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return NULL
 */
void print_statistics(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return NULL
 */
void print_array(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return the float value
 */
float find_median(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the mean 
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return the float value
 */
float find_mean(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return the unsigned char value
 */
unsigned char find_maximum(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the minimum 
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return the unsigned char value
 */
unsigned char find_minimum(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 * @param array           data array
 * @param size            size of data array
 *
 * @return unsgined char array
 */
unsigned char* sort_array(unsigned char* array, unsigned int size);

#endif /* __STATS_H__ */
