## SUBJECT
```
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
```

## ANSWEAR

```c
#include <unistd.h>

// Main function that replaces occurrences of one character with another in the input string
int	main(int ac, char **av)
{
	int i;

	i = 0;
	// Check if there are exactly 4 arguments (program name, string, char to replace, and char to replace with)
	if (ac == 4)
	{
		// Check if the second argument (char to replace) is a single alphabetic character
		if(((av[2][0] >= 'a' && av[2][0] <= 'z') || (av[2][0] >= 'A' && av[2][0] <= 'Z')) && av[2][1] == '\0')
			// Check if the third argument (char to replace with) is a single alphabetic character
			if (((av[3][0] >= 'a' && av[3][0] <= 'z') || (av[3][0] >= 'A' && av[3][0] <= 'Z')) && av[3][1] == '\0')
			{
				// Loop through the string provided in the first argument
				while (av[1][i] != '\0')
				{
					// If the character matches the character to replace, replace it with the new character
					if (av[1][i] == av[2][0])
						av[1][i] = av[3][0];
					// Print the current character (either replaced or original)
					write(1, &av[1][i], 1);
					i++; // Move to the next character in the string
				}
			}
	}
	// Print a newline character at the end
	write(1, "\n", 1);
}
```
