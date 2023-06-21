/*
 * File: 3-op_function.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * 
 * Return: the sum
 */

int op_add(int a, int b)
{
    return a + b;
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * 
 * Return: the difference
 */
int op_sub(int a, int b)
{
    return a - b;
}

/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * 
 * Return: the product
 */
int op_mul(int a, int b)
{
    return a * b;
}

/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 * 
 * Return: the quotient
 */
int op_div(int a, int b)
{
    return a / b;
}

/**
 * op_mod - returns the integer remainder of division
 * @a: first int
 * @b: second int
 * 
 * Return: the remainder
 */
int op_mod(int a, int b)
{
    return a % b;
}