## SUBJECT
```
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
```

## ANSWEAR

```c
#include <unistd.h>

// Function to print a string to the standard output
void    ft_putstr(char *str)
{
	int	i;

	i = 0;
	// Iterate through the string until the null terminator is encountered
	while (str[i] != '\0')
	{
		write(1, &str[i], 1); // Print each character one by one
		i++; // Move to the next character
	}
}
```
