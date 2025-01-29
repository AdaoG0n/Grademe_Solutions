## SUBJECT
```
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
```

## ANSWEAR

```c
#include <unistd.h>

// Main function that toggles the case of each letter in the input string
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
			// If the character is lowercase, convert it to uppercase by subtracting 32 from its ASCII value
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = av[1][i] - 32; // 'a' to 'z' -> 'A' to 'Z'
			// If the character is uppercase, convert it to lowercase by adding 32 to its ASCII value
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = av[1][i] + 32; // 'A' to 'Z' -> 'a' to 'z'
			// Print the transformed character
			write(1, &av[1][i], 1);
			i++; // Move to the next character
		}
	}
	// Print a newline character after processing the string
	write(1, "\n", 1);
}

``
