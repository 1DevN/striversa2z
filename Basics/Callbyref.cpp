// C program to illustrate call by value
#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) // Formal Parameters
{
	int t;

	t = &x;
	y = &x;
	x = &t;
}


int main()
{
	int a = 10, b = 20;

	swap(a, b); // Actual Parameters

	cout <<"a:"<<a<<endl;
	cout <<"b:"<<b;

	return 0;
}

