int is_power_of_2(unsigned int n) {
    if (n == 2 || n == 1)
        return (1);
    if (n == 0)
        return (0);
    while (n % 2 == 1)
        return (0);
    while (n > 2) 
    {
        if (n % 2 == 1)
            return (0);
        n = n / 2;
    }
    return (1);
}
