## SUBJECT
```
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
```

## ANSWEAR

```c
#include <unistd.h>

// Main function that receives an argument and prints its reverse
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	// Check if there is exactly one argument (besides the program name)
	if (ac == 2)
	{
		// Calculate the length of the string (number of characters)
		while(av[1][i] != '\0')
			i++; // Increment 'i' until the end of the string is found
		// Print the string in reverse
		while (i >= 1)
		{
			write(1, &av[1][i - 1], 1); // Print the character at position i-1
			i--; // Decrement 'i' to move to the previous character
		}
	}
	// After printing the reversed string, print a newline
	write(1, "\n", 1);
	return (0); // Return 0 indicating that the program finished successfully
}
```
