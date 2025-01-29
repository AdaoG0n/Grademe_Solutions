## SUBJECT
```
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
```

## ANSWEAR

```c
#include <unistd.h>
#include <stdio.h>
#include <string.h>
// #include <stdlib.h> // You don't need this header for size_t

// Custom implementation of strcspn
size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;  // Variable to iterate through string 's'
    size_t k = 0;  // Variable to iterate through string 'reject'

    // Loop through each character in string 's'
    while (s[i] != '\0')
    {
        // Loop through each character in string 'reject'
        while (reject[k] != '\0')
        {
            // If the character in 's' matches any character in 'reject', return the index
            if (reject[k] == s[i])
                return (i);
            k++;  // Move to the next character in 'reject'
        }

        k = 0;  // Reset the 'reject' index to start from the beginning
        i++;  // Move to the next character in 's'
    }

    return (i);  // If no characters from 'reject' were found in 's', return the length of 's'
}
```
