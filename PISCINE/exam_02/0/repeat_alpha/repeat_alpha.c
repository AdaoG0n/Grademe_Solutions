#include <unistd.h>

int	main(int argc, char **argv)
{
	int	letter = 0;
	int	repeat;

	if (argc == 2)
	{
		while (argv[1][letter])
		{
			if (argv[1][letter] >= 'b' && argv[1][letter] <= 'z')
				repeat += argv[1][letter] - 'a' + 1;
			else if (argv[1][letter] >= 'B' && argv[1][letter] <= 'Z')
				repeat += argv[1][letter] - 'A' + 1;
			else
				repeat = 1;

			while (repeat > 0)
			{
				write(1, &argv[1][letter], 1);
				repeat--;
			}
			letter++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
