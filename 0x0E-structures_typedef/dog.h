#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Mohammad Abulkhair
 * Desc: Header file for struct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif