## SUBJECT
```
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
```

## ANSWEAR

```c
// Function to check if a number is a power of 2
int is_power_of_2(unsigned int n)
{
    // If n is 0, it's not a power of 2 (since 0 is not a power of 2)
    if (n == 0)
        return (0);

    // Loop to divide n by 2 while it is greater than 1
    while (n > 1)
    {
        // If n is divisible by 2, keep dividing by 2
        if (n % 2 == 0)
            n = n / 2;  // Divide n by 2
        else
            return (0);  // If n is not divisible by 2, return 0 (it's not a power of 2)
    }

    // If we reach 1, it means n was a power of 2 (since the loop only works for powers of 2)
    return (1);
}

```
