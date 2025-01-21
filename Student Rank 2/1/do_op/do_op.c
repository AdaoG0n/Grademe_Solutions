#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

int     main(int argc, char **argv)
{
        int     i = 0;
        int     k = 0;
        int     res = 0;

        if( argc == 4)
        {
                i = atoi(argv[1]);
                k = atoi(argv[3]);
                if(argv[2][0] == '+')
                        res = i + k;
                else if (argv[2][0] == '-')
                        res = i - k;
                else if (argv[2][0] == '*')
                        res = i * k;
                else if (argv[2][0] == '%')
                        res = i % k;
                else if (argv[2][0] == '/')
                        res = i / k;
                printf("%d\n", res);
        }
        else
                write(1, "\n", 1);
        return(0);
}
