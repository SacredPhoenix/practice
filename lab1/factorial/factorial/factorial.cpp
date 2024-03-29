// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int Factorial(int n) {
	if (n < 0) {
		return -1;
	}
	const int N_MAX = 12;
	if (n > N_MAX) {
		return -2;
	}
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * Factorial(n - 1);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << Factorial(n);
    return 0;
}

