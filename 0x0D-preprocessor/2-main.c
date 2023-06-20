/*
 * File: 2-main.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include <string.h>

/**
 * main - Print file name
 * Return: 0
 */
int main(void)
{
    char name[256] = __FILE__;
    puts(name);

    return (0);
}