#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int word_started = 1;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                if (word_started == 0)
                    write(1, " ", 1);
                while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
                {
                        write(1, &argv[1][i], 1);
                        i++;
                }
                word_started = 0;
            }
            else
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}

