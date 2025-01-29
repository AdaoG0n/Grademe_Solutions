## SUBJECT
```
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
```
## ANSWEAR

```c
// Function to calculate the length of a string
int     ft_strlen(char *str)
{
	int		i;

	i = 0;
	// Iterate through the string until the null terminator is encountered
	while (str[i] != '\0')
		i++; // Increment the counter for each character
	return (i); // Return the total length of the string
}
```
