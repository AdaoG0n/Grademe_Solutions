## SUBJECT
```
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
```

## ANSWEAR

```c
#include <unistd.h>

// Main function that performs a ROT13 encryption (or decryption) on the input string
int	main(int ac, char **av)
{
	int i;

	i = 0;
	// Check if there is exactly one argument (besides the program name)
	if (ac == 2)
	{
		// Loop through each character of the string provided in the first argument
		while (av[1][i] != '\0')
		{
			// If the character is a lowercase letter (from 'a' to 'z')
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				// Perform a ROT13 encryption by calculating 219 - ASCII value of the character
				// This ensures that 'a' -> 'n', 'b' -> 'o', ..., 'z' -> 'm' and vice versa
				av[1][i] = 219 - av[1][i]; // 219 = 'a' + 'z'
			// If the character is an uppercase letter (from 'A' to 'Z')
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				// Perform a ROT13 encryption by calculating 155 - ASCII value of the character
				// This ensures that 'A' -> 'N', 'B' -> 'O', ..., 'Z' -> 'M' and vice versa
				av[1][i] = 155 - av[1][i]; // 155 = 'A' + 'Z'
			// Print the transformed character
			write(1, &av[1][i], 1);
			i++; // Move to the next character
		}
	}
	// Print a newline character after processing the string
	write(1, "\n", 1);
}

```
