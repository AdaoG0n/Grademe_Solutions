## SUBJECT
```
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100
```

## ANSWEAR

```c
#include <unistd.h>

// Function to swap the high and low nibbles (4 bits) of an octet (8 bits)
unsigned char swap_bits(unsigned char octet)
{
    // Shift the high nibble (bits 4-7) to the lower nibble (bits 0-3) and vice versa
    // (octet >> 4) moves the high nibble to the low nibble
    // (octet << 4) moves the low nibble to the high nibble
    // The bitwise OR (|) combines these two parts together
    return ((octet >> 4) | (octet << 4));
}
```
