#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Max number digit: " << get_max_number_digit(number);

	return 0;
}