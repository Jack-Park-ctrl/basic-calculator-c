#include "calculator.h"

// calculator.c

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int modulo(int c, int d)
{
    return c % d;
}

double power(double base, int exponent)
{
    int i;
    double copy = base;
    for (i = 1; i <= exponent - 1; i++)
    {
        base = base * copy;
    }
    return base;
}

