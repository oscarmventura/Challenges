// Challenge_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura 
// Ask the user for favorite number in a range between 1-100 and display the results 


#include <iostream>

int main()
{
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100: \n";
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    
    std::cout << "No Really!," << favorite_number << " is my favorite number" << std::endl;

    return 0;

}

