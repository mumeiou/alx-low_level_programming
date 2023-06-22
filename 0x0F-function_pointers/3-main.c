/*
 * File: 3-main.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - receives 4 arguments from command line and performs operations
 * @argc: command line arguments count
 * @argv: array of strings of arguments
 * 
 * Return: 98 for wrong number of arguments. 99 for wrong operator. 
 * 100 for invalid division. otherwise 0.
 */

int main(int argc, char *argv[])
{
    int (*f)(int a, int b);
    int a;
    int b;
    int result = 0;

    if (argc != 4)
    {
        puts("Error");
        return 98;
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    f = get_op_func(argv[2]);

    if (f == NULL)
    {
        puts("Error");
        return 99;
    }

    if ((argv[2] == '%' || argv[2] == '/') && b == 0)
    {
        puts("Error");
        return 100;
    }

    result = f(a, b);
    puts(result);

    return 0;
}