## SUBJECT
```
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 
```
## ANSWEAR

```c
#include <unistd.h>

int	main(void)
{
	int	i;
	int k;
	int l;

	i = 1;
	while (i <= 100) // Loop from 1 to 100
	{
		// Check if the number is divisible by both 3 and 5
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		// Check if the number is divisible by 3
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		// Check if the number is divisible by 5
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		// If the number is greater than 10, split it into digits and print each one
		else if (i > 10)
		{
			k = i / 10 + '0'; // Get the tens digit and convert to character
			l = i % 10 + '0'; // Get the ones digit and convert to character
			write (1, &k, 1); // Print the tens digit
			write (1, &l, 1); // Print the ones digit
		}
		// If the number is a single digit, print it directly
		else
		{
			k = i + '0'; // Convert the number to a character
			write(1, &k, 1);
		}
		// Print a newline character after each output
		write(1, "\n", 1);
		i++; // Increment the counter
	}		
}

```
