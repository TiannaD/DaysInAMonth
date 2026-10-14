#include <iostream>

using namespace std;

int month;


int main() {

	cout << "Enter a month (1-12): " << endl;

	cin >> month;

	if (month > 0 && month <= 12) {
		cout << month;
	}
	else {
		cout << "Invalid response.";
	}

	return 0;
}