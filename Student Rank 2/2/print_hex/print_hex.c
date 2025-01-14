#include <unistd.h>
#include <stdlib.h>

void    print_hex(int n)
{
        char    hex[] = "0123456789abcdef";

        if (n >= 16)
                print_hex (n / 16);
        write (1, &hex[n % 16], 1);
}

int     main(int ac, char **av)
{
        if (ac == 2)
                print_hex(atoi(av[1]));
        write(1, "\n", 1);
}
