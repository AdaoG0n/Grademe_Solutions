int             max(int* tab, unsigned int len)
{
        int     i = 1;
        int     max;

        if(len == 0)
                return(0);
        if(!tab)
                return(0);
        max = tab[0];
        while(i < len)
        {
                if (tab[i] > max)
                        max = tab[i];
                i++;
        }
        return(max);
}
