## SUBJECT
```
Assignment name  : do_op
Expected files   : do_op.c
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
```

## ANSWEAR

```c
#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv)
{
    int i = 0;      // First number
    int k = 0;      // Second number
    int res = 0;    // Result of the operation

    // Check if there are exactly 4 arguments (program name, first number, operator, second number)
    if (argc == 4)
    {
        // Convert the string arguments into integers
        i = atoi(argv[1]);    // First number
        k = atoi(argv[3]);    // Second number

        // Check the operator in argv[2] and perform the corresponding operation
        if (argv[2][0] == '+')
            res = i + k;  // Addition
        else if (argv[2][0] == '-')
            res = i - k;  // Subtraction
        else if (argv[2][0] == '*')
            res = i * k;  // Multiplication
        else if (argv[2][0] == '%')
            res = i % k;  // Modulo
        else if (argv[2][0] == '/')
            res = i / k;  // Division

        // Print the result of the operation
        printf("%d\n", res);
    }
    else
    {
        // If there are not exactly 4 arguments, print a newline
        write(1, "\n", 1);
    }

    return 0;
}
```
