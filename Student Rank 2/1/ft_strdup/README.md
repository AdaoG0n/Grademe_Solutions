## SUBJECT
```
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
```

## ANSWEAR

```c
#include <stdlib.h>
#include <stdio.h>

// Custom implementation of the strdup function
char    *ft_strdup(char *src)
{
    int i;           // Variable to iterate through the source string
    char *dest;      // Pointer for the new string (duplicate of source)

    i = 0;
    // Loop to find the length of the source string
    while (src[i] != '\0')
        i++;  // Increment 'i' until the end of the source string

    // Allocate memory for the new string (including space for the null terminator)
    dest = malloc(sizeof(char) * (i + 1));
    
    // Check if memory allocation failed (malloc returns NULL if it fails)
    if (dest == NULL)
        return (NULL);  // Return NULL if memory allocation failed

    i = 0;
    // Loop to copy characters from the source string to the destination string
    while (src[i] != '\0')
    {
        dest[i] = src[i];  // Copy each character
        i++;  // Move to the next character
    }

    dest[i] = src[i];  // Copy the null terminator to the end of the destination string

    return (dest);  // Return the pointer to the newly created string
}
```
