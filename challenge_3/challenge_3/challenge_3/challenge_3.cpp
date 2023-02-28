// challenge_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura

#include <iostream>

using namespace std;

int main()
{
	const int dollar = 100;
	const int quarter = 25;
	const int dime = 10;
	const int nickel = 5;
	const int penny = 1;

	int amount { 0 };
	int left_over{ 0 };
	int numberof_dollar, numberof_quarter, numberof_dime, numberof_nickel, numberof_penny;


	cout << "Enter an amount in cents: ";
	cin >> amount;
	left_over = amount;

	numberof_dollar = (amount / dollar);
	left_over = left_over % dollar;

	numberof_quarter = (left_over / quarter);
	left_over = left_over % quarter;

	numberof_dime = (left_over / dime);
	left_over = left_over % dime;

	numberof_nickel = (left_over / nickel);
	left_over = left_over % nickel;

	numberof_penny = (left_over / penny);
	left_over = (left_over % penny);
		
	cout << "\ndollars: " << numberof_dollar
		 <<	"\nquarters: " << numberof_quarter 
		 << "\ndimes: " << numberof_dime
		 << "\nnickels: " << numberof_nickel 
		 << "\npennys: " << numberof_penny
		 <<	endl;


	cout << "Left over: " << left_over << endl;



	return 0;



	


}

