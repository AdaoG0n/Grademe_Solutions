#include "unistd.h"

int     ft_atoi(char *str)
{
        int     n = 0;

        while(*str >= '0' && *str <= '9')
        {
                n = n * 10;
                n = n + *str - '0';
                str++;
        }
        return (n);
}

void    ft_putnbr(int n)
{
        char    c;

        if (n >= 10)
                ft_putnbr(n / 10);
        c = (n % 10) + '0';
        write(1, &c, 1);
}

int     main(int argc, char **argv)
{
        int     n;
        int     x;

        n = 1;
        if(argc == 2)
        {
                x = ft_atoi(argv[1]);
                while( n <= 9)
                {
                        ft_putnbr(n);
                        write(1, " x ", 3);
                        ft_putnbr(x);
                        write(1, " = ", 3);
                        ft_putnbr(n * x);
                        write(1, "\n", 1);
                        n++;
                }
        }
        else if (argc != 2)
                write(1, "\n", 1);

        return(0);
}


