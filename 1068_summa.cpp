// 1068_summa.cpp : Defines the entry point for the console application.
//
#define MY_DEF_USE_LIBTAP
#ifdef MY_DEF_USE_LIBTAP


#include "stdafx.h"
#include <iostream>
#define TAP_COMPILE
#include "libtap\cpp_tap.h"
using namespace std;

int summa(int n)
{
	int summ = 0;
	if (n >= 1 && n <=10000)
	{
		do
		{
			summ = summ + n;
			n = n - 1;
		} while (n >= 1);
	}
	else
		if (n < 1 && n >=-10000)
			{
				do
				{
					summ = summ + n;
					n = n + 1;

				} while (n <= 1);
	}
	return summ;
}

int main()
{
	plan_tests(6);
	ok(summa(-3) == -5, "Summa ot 1 do -3 ravna -5");
	ok1(summa(10) == 55);
	ok1(summa(-5) == -14);
	ok(summa(1) == 1, "Summa ot 1 do 1 ravna 1");
	ok(summa(10001) == 0, "Summa ot 1 do 10001 - oshibka");
	ok1(summa(-10001) == 0);
    return 0;
}

/*int main()
{
	int n;
	std::cin >> n;
	std::cout << summa(n);
	return 0;
}*/
