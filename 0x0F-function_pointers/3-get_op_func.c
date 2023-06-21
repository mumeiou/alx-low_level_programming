/*
 * File: 3-get_op_func.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include "3-calc.h"

/**
 * int_index - searches for an integer in an array
 * @array: array of int
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 * 
 * Return: the index of the first element for which the cmp function does not return 0. -1 otherwise.
 */

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (i < 6)
    {
        if (ops[i].op == s)
            return ops[i].f;
    }

    return NULL;
}