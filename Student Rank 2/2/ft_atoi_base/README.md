## SUBJECT
```
```

## ANSWEAR

```c
#include <stdio.h>  // Include standard I/O library
#include <stdlib.h> // Include standard library (for general utility functions)


// Function to check if a character is a whitespace or non-printing character
int is_blank(char c)
{
    // If the character's ASCII value is less than or equal to 32 (space, tab, newline, etc.), it's considered blank
    if (c <= 32)
        return (1);  // Return 1 if it's blank (whitespace)
    return (0);      // Return 0 if it's not blank
}

// Function to check if a character is a valid digit for a given base
int isvalid(char c, int base)
{
    // Arrays holding the valid digits for base 16 (hexadecimal)
    char digits[17] = "0123456789abcdef";   // Lowercase hexadecimal digits
    char digits2[17] = "0123456789ABCDEF";  // Uppercase hexadecimal digits

    // Loop through the base number and check if the character matches any valid digit
    while (base--)
        if (digits[base] == c || digits2[base] == c)  // Check both lowercase and uppercase hex digits
            return (1);  // Return 1 if character is valid for the given base
    return (0);  // Return 0 if the character is not valid
}

// Function to convert a character to its numeric value (0-15 for hexadecimal digits)
int value_of(char c)
{
    if (c >= '0' && c <= '9')   // If the character is a digit from 0 to 9
        return (c - '0');  // Convert the character to its numeric value (e.g., '0' -> 0, '1' -> 1, etc.)
    else if (c >= 'a' && c <= 'f')   // If the character is a lowercase hexadecimal digit (a-f)
        return (c - 'a' + 10);  // Convert 'a' to 10, 'b' to 11, ..., 'f' to 15
    else if (c >= 'A' && c <= 'F')   // If the character is an uppercase hexadecimal digit (A-F)
        return (c - 'A' + 10);  // Convert 'A' to 10, 'B' to 11, ..., 'F' to 15
    return (0);  // If the character is invalid (not a digit or hex letter), return 0
}

// Function to convert a string to an integer based on a given base
int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;  // To store the result of the conversion
    int sign = 1;    // To handle positive/negative numbers, default is positive

    // Skip over any leading whitespace
    while (is_blank(*str))
        str++;  // Move the pointer forward while encountering blank spaces

    // Determine the sign of the number, handling both '+' and '-' signs
    sign = (*str == '-') ? -1 : 1;  // If negative, set sign to -1, else set to 1
    (*str == '-' || *str == '+') ? ++str : 0;  // Skip the sign character if it exists

    // Process each character of the string as long as it is valid for the base
    while (isvalid(*str, str_base))
        result = result * str_base + value_of(*str++);  // Update result by multiplying the current value and adding the digit's value

    // Return the final result with the appropriate sign (positive or negative)
    return (result * sign);
}
```
