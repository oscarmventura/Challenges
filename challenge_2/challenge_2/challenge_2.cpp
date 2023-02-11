// challenge_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura  
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    
    vector <int> vector1{};
    vector <int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

   
    //testing
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;

    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;

    
    






    return 0;

}

