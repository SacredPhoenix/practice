// 1014_proizv_cifr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int delitel(int* a)
{
	for (int i = 9; i >1; i--)
	{
		if (*a % i == 0)
		{
			*a = *a/i;
			return i;
		}
	}
	if (*a!=1)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
	int main()
{
	int n;
	cin >> n;
	int res; 
	int j = 0;
	vector<int> vect;
	if (n > 1000000000 || n < 0)
	{
		cout << -1;
		return 0;
	}
	if (n == 0)
	{
		cout << 10;
		return 0;
	}
	else if( n == 1)
	{
		cout << 1;
		return 0;
	}
	else
	{
		while (1)
		{
			res = delitel(&n);
			if (res == -1)
			{
				cout << -1;
				return 0;
			}
			if (res == 0)
			{
				break;
			}
			vect.push_back(res);
			j++;
		}
	}
	for(int i = j - 1; i >=0; i--)
	{
		cout << vect[i];
	}
	return 0;
}
