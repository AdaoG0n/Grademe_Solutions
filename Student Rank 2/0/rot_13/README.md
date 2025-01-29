## SUBJECT
```
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
```

## ANSWEAR

```c
#include <unistd.h>

// Main function that applies the ROT13 cipher to the argument string
int main(int ac, char **av)
{
	int i;

	i = 0;
	// Check if there is exactly one argument (besides the program name)
	if (ac == 2)
	{
		// Loop through each character of the argument string
		while(av[1][i] != '\0')
		{
			// If the character is between 'a' and 'm' or 'A' and 'M', shift it by 13
			if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
				av[1][i] = av[1][i] + 13; // Shift character by 13 for ROT13 encryption
			// If the character is between 'n' and 'z' or 'N' and 'Z', shift it by 13
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				av[1][i] = av[1][i] - 13; // Shift character by 13 for ROT13 encryption
			// Output the transformed character
			write(1, &av[1][i], 1);
			i++; // Move to the next character
		}
	}
	// Print a newline character after processing the string
	write(1, "\n", 1);	
}
```
