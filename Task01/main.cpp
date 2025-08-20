#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Sum of digits = " << count_sum_of_digits(number);

	return 0;
}