/*Program File Name: Chapter1Program1
Programmer: Patrick Liao
Date 1.27.2025
Requirekments: Calculate pay based on hours worked and hourly pay.
*/


#include <iostream>
using namespace std; 

int main()
{
	double hours, rate, pay;

	//Get the number of hours worked.
	cout << "How many hours did you work? ";
	cin >> hours;

	//Get the hourly pay rate.
	cout << "How much do you get paid per hour? ";
	cin >> rate;

	//Calculate the pay.
	pay = hours * rate; 

	//Display the pay
	cout << "You have earned $" << pay << endl;
	return 0; 
}