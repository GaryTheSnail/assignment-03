/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
/**
 * A short program that deals with turtles.
 */

#include <iostream>
#include "lettuce.h"
#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

int main()                                                              //main function
{
    Lettuce turtle;
    Functions part4;
    
    turtle.feedOrNot();                                                 //call feedOrNot function
    
    turtle.days = turtle.howManyDays();                                 //call howManyDays function
    
    turtle.amount = turtle.feedTurtle(turtle.days);                     //call feedTurtle function
    
    turtle.displayAmount(turtle.amount, turtle.days);                   //call displayAmount function
    
    cout << "Enter 2 numbers to find the greatest common divisor: ";
    cin >> part4.a >> part4.b;
    
    cout << part4.gcd(part4.a, part4.b) << endl;                        //call gcd function
    
    cout << "Enter a number to find it's corresponding fib number: ";
    cin >> part4.a;
    
    cout << part4.fib(part4.a) << endl;                                 //call fib function
    
    cout << "Enter 2 numbers to find put into a power function: ";
    cin >> part4.a >> part4.b;
    
    cout << part4.pow(part4.a, part4.b) << endl;                        //call pow function
    
    cout << "Enter 2 numbers to find put into a power function(non recursive): ";
    cin >> part4.a >> part4.b;
    
    cout << part4.pow_iter(part4.a, part4.b) << endl;                   //call pow_iter function
        return 0;
}

