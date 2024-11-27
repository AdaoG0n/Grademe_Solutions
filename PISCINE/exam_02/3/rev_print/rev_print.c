#include <unistd.h>
int	main(int argc, char **argv)
{
	int i = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(argv[1][i])
	{
		i++;
	}
	while(i)
	{
		write(1, &argv[1][--i], 1);
	}
	write(1, "\n", 1);
	return(0);
}

