/*
 * File: 2-int_index.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array of int
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 * 
 * Return: the index of the first element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    if (array && size > 0 && cmp ) {
        int i;
        for (i = 0; i < size; ++i)
        {
            if (action(array[i] != 0)
            {
                return i;
            }
        }
    }
    return -1;
}