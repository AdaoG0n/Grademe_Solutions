#include "unistd.h"

int     main(int argc, char **argv)
{
        int i = 0;
        int j = 0;
        int k = 0;

        if (argc == 3)
        {
                while (argv[1][i] != '\0')
                {
                        while(argv[1][i] != argv[2][j] && argv[2][j] != '\0')
                                j++;
                        if (argv[2][j] == '\0')
                        {
                                write(1, "0\n", 2);
                                return(0);
                        }
                        i++;
                        j++;
                }
                write(1, "1", 1);
        }
        write(1, "\n", 1);
        return(0);
}
