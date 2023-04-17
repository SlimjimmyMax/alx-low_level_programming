#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines the basic information of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Description: This struct defines the basic information that we can know about a dog.
 * It includes the dog's name, age, and the name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog struct with provided values
 * @d: Pointer to dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * This function takes in a pointer to a dog struct and initializes its name, age, and owner
 * elements with the provided arguments.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a dog struct's information
 * @d: Pointer to dog struct
 *
 * This function prints the name, age, and owner elements of a dog struct. If any of these
 * elements are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog struct with provided values
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * This function creates a new dog struct with the provided name, age, and owner elements,
 * and returns a pointer to it. It also stores a copy of the name and owner elements.
 * If the function fails, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated to a dog struct
 * @d: Pointer to dog struct
 *
 * This function frees the memory allocated to a dog struct.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string
 * @dest: Destination of the copy
 * @src: Source of the copy
 *
 * This function copies the string pointed to by src, including the terminating null byte,
 * to the buffer pointed to by dest.
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Computes the length of a string
 * @s: Pointer to string
 *
 * This function computes the length of the string s.
 * Return: Length of string s.
 */
int _strlen(char *s);

#endif
