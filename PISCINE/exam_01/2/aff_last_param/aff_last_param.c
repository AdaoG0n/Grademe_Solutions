#include<unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *last_arg = argv[argc - 1];
		while (*last_arg)
		{
			write(1, last_arg, 1);
			last_arg++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

