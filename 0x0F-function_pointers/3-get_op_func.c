/*
 * File: 3-get_op_func.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - matches passed operation to correct funtion
 * @s: passes operation
 * 
 * Return: pointer to correct function needed for the operation
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