/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include <iostream>
#include <cmath>
#include "functions.h"

using std::cout;
using std::cin;

int Functions::gcd(int a, int b)                //gcd function
{
    a = abs(a);                                 //make inputs positive
    b = abs(b);
    
    if (a == 0) return b;                       //base cases
    else if (b == 0) return a;
    
    else if (a > b)                             //recursive case
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}

int Functions::fib(int a)                       //Fibonacci function
{
    if (a == 0) return 0;                       //base cases
    if (a == 1) return 1;
    else if (a == 2) return 1;
    
    else                                        //recursive case
        return fib(a - 1) + fib(a - 2);
}

int Functions::pow(int a, int b)                //pow function
{
    if (b == 0) return 1;                       //base cases
    else if (b == 1) return a;
    
    else                                        //recursive case
        return a * pow(a, b - 1);
}

int Functions::pow_iter(int a, int b)           //pow_iter function
{
    return pow(a, b);
}