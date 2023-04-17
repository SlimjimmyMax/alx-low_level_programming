# alx-low_level_programming
C - Structures and Typedef
In this C program, we define a new structure named "dog" with three elements: name, age, and owner. The name and owner are of type char* while age is of type float. As the saying goes, a dog is the only thing on earth that loves you more than you love yourself, so we'll be working with functions that initialize, print, create, and free this new structure.

Functions
1. void init_dog(struct dog *d, char *name, float age, char *owner)
This function takes in a pointer to a "dog" struct, and initializes its name, age, and owner elements with the provided arguments.

2. void print_dog(struct dog *d)
This function prints the name, age, and owner elements of a "dog" struct. If any of these elements are NULL, it prints "(nil)" instead.

3. dog_t *new_dog(char *name, float age, char *owner)
This function creates a new "dog" struct and returns a pointer to it. It also stores a copy of the name and owner elements. If the function fails, it returns NULL.

4. void free_dog(dog_t *d)
This function frees the memory allocated to a "dog" struct.

Typedef
We also define a new type "dog_t" as a new name for the type "struct dog".

As Groucho Marx once said, "Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read." But with these functions, we can work with dogs and their structures in the light.
