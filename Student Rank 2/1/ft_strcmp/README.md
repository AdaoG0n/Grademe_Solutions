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

int ft_strcmp(char *s1, char *s2);

int main()
{
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";
    char str4[] = "app";

    // Comparing identical strings
    printf("Result of ft_strcmp(str1, str2): %d\n", ft_strcmp(str1, str2)); // Expected output: 0

    // Comparing lexicographically greater string
    printf("Result of ft_strcmp(str1, str3): %d\n", ft_strcmp(str1, str3)); // Expected output: a negative number

    // Comparing lexicographically smaller string
    printf("Result of ft_strcmp(str3, str1): %d\n", ft_strcmp(str3, str1)); // Expected output: a positive number

    // Comparing strings of different lengths
    printf("Result of ft_strcmp(str1, str4): %d\n", ft_strcmp(str1, str4)); // Expected output: a positive number

    return 0;
}
```
