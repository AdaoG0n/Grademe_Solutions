#include "unistd.h"

char    ft_putnbr(int n)
{
        char    c;
        if (n >= 10)
                ft_putnbr(n /10);
        c = n % 10 + '0';
        write(1, &c, 1);
}

int     main(int argc, char **argv)
{
        int     i = 0;
        (void)argv;

        if (argc > 1)
        {
                while(argc > 1)
                {
                        argc--;
                        i++;
                }
                ft_putnbr(i);
                write(1, "\n",1);
                return (0);
        }
        write(1, "0\n", 2);
        return (0);
}

