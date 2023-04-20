C - Variadic functions TASKS 0. Ugliness is constant, but beauty is varied.
Create a function that returns the total of its arguments.

int sum_them_all(const unsigned int n,...); prototype

If n equals 0, return 0.

1. To be is to be a variable's value.
Create a function that outputs integers and then a new line.

void print_numbers(const char *separator, const unsigned int n,...) is a prototype.

where separator is the string to be printed between the numbers and n denotes the number of integers provided to the function

You are permitted to use printf.

If the separator is NULL, it is not printed.

At the end of your function, add a new line.

2. The constant of one woman is the variable of another.
Make a function that prints strings, followed by the string aStrings and a new line.

void print_strings(const char *separator, const unsigned int n,...) is a prototype.

where separator is the string to be printed between the strings and n represents the number of strings supplied to the function

You are permitted to use printf.

If the separator is NULL, it is not printed.

If any of the strings are NULL, print (nil).

At the end of your function, add a new line.

3. To be is to be a variable's value.
Create a function that will print anything.

void print_all(const char *, const format,...);

where format is a list of parameter types supplied to the function

c: character i: integer
f: floating
s: char * (print (nil) instead of any other value if the string is NULL
Strings are followed by a new line.

void print_strings(const char *separator, const unsigned int n,...) is a prototype.

where separator is the string to be printed between the strings and n represents the number of strings supplied to the function

You are permitted to use printf.
