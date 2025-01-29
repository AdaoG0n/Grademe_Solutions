## SUBJECT
```
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```

## ANSWEAR

```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;  // Variable to iterate over the characters of the input string

	i = 0;
	// Check if exactly 2 arguments are passed (program name + input string)
	if (ac == 2)
	{
		// Loop to find the length of the input string
		while (av[1][i] != '\0')
			i++;  // Move to the end of the string
		i--;  // Move one step back to the last character of the string

		// Skip trailing spaces or tabs at the end of the string
		while ((av[1][i] == ' ' || av[1][i] == '\t') && i != 0)
			i--;  // Keep moving back until a non-space/tab character is found

		// Skip the first word (if there is any), by moving back until a space/tab is encountered
		while (av[1][i] != ' ' && av[1][i] != '\t' && i != 0)
			i--;  // Continue moving back to find the start of the last word

		// If a space or tab is encountered after skipping the first word, move one step forward
		if (av[1][i] == ' ' || av[1][i] == '\t')
			i++;

		// Loop to print the last word (from the current position to the end of the string)
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{	
			write(1, &av[1][i], 1);  // Print each character of the last word
			i++;  // Move to the next character
		}
	}
	write(1, "\n", 1);  // Print a newline at the end
}
```
