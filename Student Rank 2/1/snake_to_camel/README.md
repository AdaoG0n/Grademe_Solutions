## SUBJECT
```
Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$
```

## ANSWEAR

```c
#include "unistd.h"

// Main function that takes arguments and modifies the string as specified
int main(int argc, char **argv)
{
    int i;

    i = 0;

    // Check if there are exactly two arguments (program name and input string)
    if (argc == 2)
    {
        // Loop through the string (argv[1])
        while (argv[1][i] != '\0')
        {
            // If an underscore ('_') is encountered
            if (argv[1][i] == '_')
            {
                i++; // Skip the underscore character

                // If the next character is a lowercase letter, convert it to uppercase
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                    argv[1][i] -= 32;  // Convert to uppercase by subtracting 32 from its ASCII value
            }
            // Print the current character (whether modified or not)
            write(1, &argv[1][i], 1);
            i++; // Move to the next character
        }
    }
    // Print a newline after processing the string
    write(1, "\n", 1);

    // Return 0 to indicate successful execution
    return (0);
}
```
