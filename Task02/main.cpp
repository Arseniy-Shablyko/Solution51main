#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Power of three: " << (is_power_of_three(number) ? "Yes" : "No");

	return 0;
}