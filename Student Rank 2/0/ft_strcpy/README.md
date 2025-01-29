```
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
```

## SOLUCTION

```c
#include <unistd.h>

// Function to copy the content of string s2 into s1
char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	// Iterate through s2 until the null terminator is encountered
	while (s2[i] != '\0')
	{
		s1[i] = s2[i]; // Copy each character from s2 to s1
		i++;
	}
	s1[i] = '\0'; // Append the null terminator at the end of s1
	return (s1); // Return the destination string s1
}

```
