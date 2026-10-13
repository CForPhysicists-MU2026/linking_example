# Overview

The following is an example on how to separate a program into different files and functions. I start with a simple example in main.c which can be compiled with:

```text
gcc -o prog main.c -lm
```


# Moving the calculation to a separate function

We have now moved the calculation part of our computation to its own function above the main function. Note that c reads files from top to bottom, so any function that is to be used within the main function has to be declared above it.

A function always starts with the datatype it is to return. In our this is double. If nothing is to be returned, write 'void' instead of the datatype. This is followed by the function name and a list of input parameters in brackets. Note, that c always copies variable when handing them to a function. This means that the variable 'a' inside the function is not the same as in the main function and changes to it will not affect 'a' in the main function.
