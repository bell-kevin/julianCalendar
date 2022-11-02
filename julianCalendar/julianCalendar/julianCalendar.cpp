// julianCalendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Create a class for the day of the year. It needs constant static variables for the array for the last Julian day of each month and the array of month names
class DayOfYear
{
private:
	int day;
	static const int lastDay[];
	static const char* monthName[];
public:
	DayOfYear(int d);
	void print();
};
	

int main()
{
	cout << "Chapter 11 Julian Days by Kevin Bell\n\n";
	cout << "This program converts a Julian day into month and day format\n";
	cout << "Use a number between 1 and 365 (-1 to end)\n\n";
	cout << "Enter a number: ";
	int day;
	cin >> day;
	// input validation loop, if the user enters a number less than -1 or greater than 365, the program will ask for another number
	while (day < -1 || day > 365 || day ==0)
	{
		cout << "Invalid number, please enter a number between 1 and 365 (-1 to end): ";
		cin >> day;
	}
	//enter a number between -1 and 365
	while (day != -1 && day <= 365 && day >=-1)
	{
		DayOfYear date(day);
		date.print();
		cout << "Enter a number: ";
		cin >> day;
	}
	cout << "Goodbye!\n";
	system("pause");
	return 0;
}

//Create a constructor that takes the day of the year as an argument and stores it in the private member variable
DayOfYear::DayOfYear(int d)
{
	day = d;
}

//Create a print function that prints the month and day
void DayOfYear::print()
{
	int month = 0;
	while (day > lastDay[month])
		month++;
	cout << "That day is " << monthName[month-1] << " " << day - lastDay[month - 1] << endl;

	//ouput the day before
	if (day == 1)
		cout << "The day before is December 31\n";
	else
	{
		month = 0;
		while (day - 1 > lastDay[month])
			month++;
		cout << "The day before is " << monthName[month - 1] << " " << day - 1 - lastDay[month - 1] << endl;
	}
	//output the day after
	if (day == 365)
		cout << "The day after is January 1\n";
	else
	{
		month = 0;
		while (day + 1 > lastDay[month])
			month++;
		cout << "The day after is " << monthName[month - 1] << " " << day + 1 - lastDay[month - 1] << endl;
	}
	cout << endl;
}

//Initialize the static variables
const int DayOfYear::lastDay[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
const char* DayOfYear::monthName[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
