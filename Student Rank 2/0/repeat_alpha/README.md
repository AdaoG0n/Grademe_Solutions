## SUBJECT
```
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
```

## SOLUCTION

```c
#include <unistd.h>

// Program that repeats each letter in the argument based on its position in the alphabet
int	main(int ac, char **av)
{
	int i;
	int k;
	char *str;

	i = 0;
	k = 1; // Default repeat count
	if (ac == 2) // Ensure there is exactly one argument
	{
		str = av[1]; // Assign the argument string to str
		while (str[i] != '\0') // Loop through each character of the string
		{
			k = 1; // Reset repeat count for each character
			// If the character is an uppercase letter, set k to its position in the alphabet
			if (str[i] >= 'A' && str[i] <= 'Z')
				k = str[i] - 64; // 'A' = 1, 'B' = 2, ..., 'Z' = 26
			// If the character is a lowercase letter, set k to its position in the alphabet
			if (str[i] >= 'a' && str[i] <= 'z')
				k = str[i] - 96; // 'a' = 1, 'b' = 2, ..., 'z' = 26
			// Print the character k times
			while (k >= 1)
			{
				write(1, &str[i], 1);
				k--;
			}
			i++; // Move to the next character
		}
	}
	write(1, "\n", 1); // Print a newline at the end
	return (0);
}
```
