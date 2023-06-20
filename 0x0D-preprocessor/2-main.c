/*
 * File: 2-main.c
 * Auth: Mohammad Abulkhair
 */

#include <stdio.h>
#include <string.h>

#define FILE_NAME __FILE__

/**
 * main - Print file name
 * Return: 0
 */
int main(void)
{
    char name[5000] = FILE_NAME;
    puts(name);

    return (0);
}