## SUBJECT
```
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
```

## ANSWEAR

```c
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    // Check if there is exactly one argument (besides the program name)
    if (argc == 2)
    {
        // Loop through each character of the string provided in the first argument
        for (int i = 0; argv[1][i]; i += 1)
        {
            // If the character is an uppercase letter (from 'A' to 'Z')
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                // Write an underscore '_' to standard output before the character
                write(STDOUT_FILENO, "_", 1);
                // Convert the uppercase letter to lowercase by adding 32 to its ASCII value
                argv[1][i] += 32;
            }
            // Write the (possibly modified) character to standard output
            write(STDOUT_FILENO, &argv[1][i], 1);
        }
    }
    // Print a newline character at the end of processing
    write(STDOUT_FILENO, "\n", 1);
    return EXIT_SUCCESS;
}
```
