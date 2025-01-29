## SUBJECT
```
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
```

## ANSWEAR

```c
#include <stdio.h>

// ft_atoi function: Converts a string to an integer (custom implementation of atoi)
int ft_atoi(const char *str)
{
    int nbr = 0;  // Variable to store the converted number
    int sig = 1;  // Sign flag, default is positive
    int i = 0;    // Index variable to traverse the string

    // Check for leading '+' or '-' sign
    if (str[0] == '-' || str[0] == '+')
    {
        // If the sign is '-', set sig to -1 (negative number)
        if (str[0] == '-')
            sig = -1;
        i += 1; // Skip the sign character
    }

    // Convert each digit character to an integer, ignoring non-digit characters
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        // Update the number by multiplying the current number by 10 and adding the new digit
        nbr = (nbr * 10) + (str[i++] - '0');
    }

    // Apply the sign to the result and return it
    return (nbr * sig);
}
```
