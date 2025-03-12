#include "stdlib.h"

int     *ft_range(int start, int end)
{
        int     i = 0;
        int     *arr;
        int     size;

        size = abs (end - start) + 1;
        arr = malloc (sizeof (int) * size);
        if (!arr)
                return(NULL);
        if (start < end)
        {
                while(start <= end)
                {
                        arr[i] = start;
                        start++;
                        i++;
                }
        }
        else if (start > end)
        {
                while( start >= end)
                {
                        arr[i] = start;
                        start--;
                        i++;
                }
        }
        else
                arr[i] = start;
        return(arr);
}

