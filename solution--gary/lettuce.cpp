/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include <iostream>
#include <cstdlib>
#include <vector>
#include "lettuce.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int Lettuce::feedOrNot()                                                        //feedOrNot function
{
    try                                                                         //throw any errors
    {
        cout << "Do you want to feed the turtle(y/n)? ";
        cin >> feed;                                                            //get user input
        
        if (feed == 'y')
        {
            return 1;
        }
        
        else if (feed == 'n')
        {
            cout << "You let the turtle starve!" << endl;
            exit(0);
        }
        
        else
            throw string("Something went wrong!");
    }
    catch (string exception)                                                    //catch thrown errors
    {
        cout << exception;
        return 0;
    }
}

int Lettuce::howManyDays()
{
    cout << "How many days do you wish to take care of the turtle? ";
    cin >> days;                                                                //get user input
    return days;
}

void Lettuce::displayAmount(double amount, int days)
{
    vector<double> foodArray(days);

    foodPerDay = amount / days;                                                 //display output
    for (int i = 0; i < days; i++)
        foodArray[i] = foodPerDay;
    
    for (int i = 0; i < days; i++)
        cout << "Feed " << foodArray[i] << " ounces of food on day " << i + 1 << "." << endl;
}

