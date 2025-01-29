## SUBJECT
```
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
```

## ANSWEAR

```c
#include <unistd.h>

int main(int argc, char **argv)
{
    // Check if exactly 3 arguments are passed (program name, first string, second string)
    if (argc == 3)
    {
        // Create an array to store ASCII character occurrences (size 255 to cover all ASCII characters)
        int ascii[255] = {0};
        
        // Loop through each string argument (argv[1] and argv[2])
        for (int i = 1; i < 3; i += 1) // Note: loop starts from 1 to use argv[1] and argv[2]
        {
            int j = 0;
            // Loop through each character in the current string
            while (argv[i][j])
            {
                // If the character hasn't been printed yet (ascii value is 0)
                if (ascii[(int)argv[i][j]] == 0)
                {
                    // Mark the character as printed
                    ascii[(int)argv[i][j]] = 1;
                    // Print the current character to the output
                    write(1, &argv[i][j], 1);
                }
                j += 1;
            }
        }
    }
    // Print a newline character at the end
    write(1, "\n", 1);
    return (0);
}
```
