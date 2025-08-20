#include "logic.h"

int get_max_number_digit(int number) {
	number = number < 0 ? -number : number;

	if (number < 10) {
		return number;
	}

	int digit = number % 10;
	number = get_max_number_digit(number / 10);

	return digit > number ? digit : number;
}