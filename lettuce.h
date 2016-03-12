/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#ifndef LETTUCE_H
#define LETTUCE_H

class Lettuce                               //Lettuce class
{
private:
    double totalFed, foodPerDay;
    char feed;
    double foodAmount;
public:
    int days;
    double amount;
    int feedOrNot();
    int howManyDays();
    
    template<typename T>
    double feedTurtle(T x)
    {
        std::cout << "How many ounces of lettuce can you buy for the turtle? ";
        std::cin >> foodAmount;
        
        T totalFood = foodAmount;
        
        return totalFood;
    }
    
    void displayAmount(double amount, int days);
};

#endif