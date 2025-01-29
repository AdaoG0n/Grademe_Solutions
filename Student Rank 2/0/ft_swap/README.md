## SUBJECT
```
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
```

## ANSWEAR

```c
#include <unistd.h>
#include <stdio.h>

// Function to swap the values of two integers using pointers
void    ft_swap(int *a, int *b)
{
	int	temp; // Temporary variable to hold one of the values during the swap

	temp = *a; // Store the value of 'a' in temp
	*a = *b;   // Assign the value of 'b' to 'a'
	*b = temp; // Assign the value stored in temp to 'b'
}
``` 
