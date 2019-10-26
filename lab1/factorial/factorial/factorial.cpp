// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

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
    return 0;
}

