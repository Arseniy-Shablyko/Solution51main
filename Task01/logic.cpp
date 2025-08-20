#include "logic.h"

int count_sum_of_digits(int number) {
	number = number < 0 ? -number : number;

	if (number < 10) {
		return number;
	}

	return count_sum_of_digits(number / 10) + number % 10;
}