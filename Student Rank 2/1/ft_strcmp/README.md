## SUBJECT
```
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
```

## ANSWEAR

```c
#include <stdio.h>
#include <string.h>

// Custom implementation of strcmp (string compare)
int ft_strcmp(char *s1, char *s2)
{
    int i;  // Index variable to iterate through both strings

    i = 0;  // Initialize index to 0
    // Compare characters at the same position in both strings while they are equal
    // and neither string has reached its null terminator
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;  // Move to the next character

    // Return the difference between the characters at the first unequal position
    return (s1[i] - s2[i]);
}

}
```
