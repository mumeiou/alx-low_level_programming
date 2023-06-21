/*
 * File: 1-array_iterator.c
 * Auth: Mohammad Abulkhair
 */

#include "function_pointers.h"

/**
 * array_iterator - 
 * @array: array of int
 * @size: the size of the array
 * @action: pointer to the function of action. takes int
 * 
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && size && action) {
        size_t i;
        for (i = 0; i < size; ++i)
        {
            action(array[i]);
        }
    }

}