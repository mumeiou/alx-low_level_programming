#include <stdio.h> /* standard input output */
#include "function_pointers.h" /* FUNCTION_POINTERS_H */

/**
 * array_iterator - iterates over an array of integers to perform action
 * @array: array of int
 * @size: the size of the array
 * @action: pointer to the function of action. takes int
 * 
 * return: Nothing
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

    return;

}