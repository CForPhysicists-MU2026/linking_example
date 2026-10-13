# Overview

The following is an example on how to separate a program into different files and functions. I start with a simple example in main.c which can be compiled with:

```text
gcc -o prog main.c -lm
```


# Moving the calculation to a separate function

We have now moved the calculation part of our computation to its own function above the main function. Note that c reads files from top to bottom, so any function that is to be used within the main function has to be declared above it.

A function always starts with the datatype it is to return. In our this is double. If nothing is to be returned, write 'void' instead of the datatype. This is followed by the function name and a list of input parameters in brackets. Note, that c always copies variable when handing them to a function. This means that the variable 'a' inside the function is not the same as in the main function and changes to it will not affect 'a' in the main function.

Having too many functions above the main function can make our code hard to read. Therefore, we use what is called a forward declaration. A declaration is a statement that tells the compiler that an object exists. This can be an object or a variable. A definition tells us, what the object does. For a variable we could for example write:

```c
int i;      //declaration
i = 9;      //definition
```

For our function this looks like:

```c
//declaration
double MySqrt( double a );

//definition
double MySqrt( double a )
{
    return sqrt( a );
}
```

A function always has to be *declared* before it is used, but it can be defined anywhere.


# Moving the calculation to a separate file

As I mentioned above, the function definition can be anywhere. This includes in a different file. For our example I created the file 'sqrt.c' and moved the sqrt function there. This can be compiled using:

```text
gcc -o prog main.c sqrt.c -lm
```

As you can imagine, this will end up making our 'main.c' crowded with forward declarations once our programs get a little larger. To prevent this from happening, we can create what is called a header file.

By convention a header file gets the same name as the corresponding c-file, but with a '.h' at the end. The header file contains all the declarations needed, however, no definitions. The header can then be added to the 'main.c' by adding the following at the top of it:

```c
#include "sqrt.h"
```

Note, that I included this header with quotation marks, rather than angle brackets. Angle brackets tell the compiler to look for a header in the standard system files installed with your compiler. Quotation marks tell the compiler to look relative to the file that does the including. So in our case the compiler will look into the directory where 'main.c' is located.
