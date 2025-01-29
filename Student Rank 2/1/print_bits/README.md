## SUBJECT
```
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
```

## ANSWEAR

```c
#include <unistd.h>

// Function to print the binary representation of a given byte (unsigned char)
void print_bits(unsigned char octet)
{
   int i;

   // Loop through each bit from the most significant (leftmost) to the least significant (rightmost)
   for (i = 7; i >= 0; i--)
   {
        // Check if the i-th bit is set (1) or not (0)
        if (octet & (1 << i))
            // If the i-th bit is 1, print "1"
            write(1, "1", 1);
        else
            // If the i-th bit is 0, print "0"
            write(1, "0", 1);
   }
}

```
