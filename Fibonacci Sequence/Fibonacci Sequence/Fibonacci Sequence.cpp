// Fibonacci Sequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	cin >> x;

	double P = (1 + pow(5, 0.5)) / 2;
	double p = -1 / P;

	cout << P << " " << p << endl;
	cout << pow(5, .5) << endl;

	cout << (pow(P, x) - pow(p, x))/pow(5, .5) << endl;

    return 0;
}