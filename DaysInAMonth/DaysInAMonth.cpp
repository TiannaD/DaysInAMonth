#include <iostream>

using namespace std;

//This program takes the month and year as input and outputs the number of days in the month and whether the year is a leap year

int month;
int year;

const int LEAP_YEAR = 4;

string months[12] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main() {

	cout << "Enter a month (1-12): " << endl;
	cin >> month;

	cout << "Enter year: " << endl;
	cin >> year;

	if (month > 0 && month <= 12) {
		//if leap year
		if (year % LEAP_YEAR == 0 && year % 100 != 0 || year % 400 == 0) {
			if (month == 2) {
				cout << endl << months[month-1] << endl << "Days: " << "29 days" << endl << "Year: Leap year" << endl;
			}
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				cout << endl << months[month - 1] << endl << "Days: " << "31 days" << endl << "Year: Leap year" << endl;
			}
			else {
				cout << endl << months[month - 1] << endl << "Days: " << "30 days" << endl << "Year: Leap year" << endl;
			}
		}//if NOT leap year
		else {
			if (month == 2) {
				cout << endl << months[month - 1] << endl << "Days: " << "28 days" << endl << "Year: Common year" << endl;
			}
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				cout << endl << months[month - 1] << endl << "Days: " << "31 days" << endl << "Year: Common year" << endl;
			}
			else {
				cout << endl << months[month - 1] << endl << "Days: " << "30 days" << endl << "Year: Common year" << endl;
			}
		}

	}
	else {
		cout << "Invalid month." << endl;
	}


	return 0;
}