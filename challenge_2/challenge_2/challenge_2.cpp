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
    vector <vector<int>> vector_2d
    {



    };

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "\nThe elements on vector 1 are:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;
    
    
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nThe elements on vector 2 are:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;
    
   
    //Adding vector1 to vector_2d dynamically
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Display the results of vector_2d using the at method 
    cout << "\nThe results of Vector 2D are" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
   
    //Change vector1 at(0) to 1000
    int new_value = 1000;
    cout << new_value << endl;
    cin >> vector1.at(0);

    cout << "\nUpdated:" << endl;
    cout << vector1.at(0) << endl;

    
   


    return 0;

}

