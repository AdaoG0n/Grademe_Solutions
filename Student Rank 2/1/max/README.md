## SUBJECT
```
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
```

## ANSWEAR

```c
// Function to find the maximum value in an array
int max(int* tab, unsigned int len)
{
    // If the length of the array is 0, return 0 as there is no element to compare
    if (len == 0)
        return (0);

    // Initialize 'res' to the first element of the array
    int res = tab[0];

    // Loop through the array to compare each element with the current 'res'
    for (unsigned int i = 0; i < len; i += 1)
    {
        // If the current element is greater than 'res', update 'res' with this element
        if (res < tab[i])
            res = tab[i];
    }

    // Return the maximum value found in the array
    return (res);
}
```
