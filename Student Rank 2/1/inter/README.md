## SUBJECT
```
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
```

## ANSWEAR

```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;          // Variable to iterate through the first string (s1)
	int	k;          // Variable to iterate through the second string (s2)
	int l;          // Variable to track the position of characters in s1 and s2
	char *s1;       // Pointer to the first string passed as an argument
	char *s2;       // Pointer to the second string passed as an argument

	i = 0;  // Initialize the index for s1
	l = 0;  // Initialize the index for tracking matching characters

	if (ac == 3)  // Check if exactly 2 arguments are passed (program name + two strings)
	{
		s1 = av[1];  // Assign the first argument (s1) to s1
		s2 = av[2];  // Assign the second argument (s2) to s2

		// Loop through each character in s1
		while (s1[i] != '\0')
		{
			k = 0;  // Reset the index for iterating through s2

			// Loop through each character in s2
			while (s2[k] != '\0')
			{
				// Check if the current character in s1 matches the current character in s2
				if (s1[i] == s2[k])
				{ 
					l = 0;  // Reset the index for tracking characters in s1
					
					// Find the position of s1[i] in s1
					while (s1[l] != s1[i])
						l++;

					// If s1[i] is the first occurrence in s1, continue
					if (l == i)
					{
						l = 0;  // Reset the index for tracking characters in s2
						
						// Find the position of s2[k] in s2
						while (s2[l] != s2[k])
							l++;

						// If s2[k] is the first occurrence in s2, print the character
						if (l == k)
							write(1, &s1[i], 1);
					}
				}
				k++;  // Move to the next character in s2
			}
			i++;  // Move to the next character in s1
		}
	}
	write(1, "\n", 1);  // Print a newline at the end
}
```
