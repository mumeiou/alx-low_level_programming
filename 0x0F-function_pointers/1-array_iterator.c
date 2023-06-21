#include <stdio.h> /* standard input output */
#include "function_pointers.h" /* FUNCTION_POINTERS_H */

/**
 * array_iterator - iterates over an array of integers to perform action
 * @array: array of int
 * @size: the size of the array
 * @action: pointer to the function of action. takes int
 * 
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    
    if (array && size && action)
    {
        for (i = 0; i < size; ++i)
        {
            action(array[i]);
        }
    }
    return;
}