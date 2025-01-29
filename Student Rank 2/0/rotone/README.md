## SUBJECT
```
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
```

## ANSWEAR

```c
#include <unistd.h>

// Main function that shifts each letter of the argument string by one position in the alphabet
int	main(int ac, char **av)
{
	int i;

	i = 0;
	// Check if there is exactly one argument (besides the program name)
	if (ac == 2)
	{
		// Loop through each character of the argument string
		while (av[1][i] != '\0')
		{
			// If the character is between 'a' and 'y' or 'A' and 'Y', shift it by 1
			if ((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'A' && av[1][i] <= 'Y'))
				av[1][i] = av[1][i] + 1; // Shift character by 1 for each letter from 'a' to 'y' or 'A' to 'Y'
			// If the character is 'z' or 'Z', shift it to 'a' or 'A' respectively
			else if (av[1][i] == 'z' || av[1][i] == 'Z')
				av[1][i] = av[1][i] - 25; // Wrap around: 'z' becomes 'a', 'Z' becomes 'A'
			// Output the transformed character
			write(1, &av[1][i], 1);
			i++; // Move to the next character
		}
	}
	// Print a newline character after processing the string
	write(1, "\n", 1);
}
``` 
