#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void ex1_4(void)
{
	int ix = 125;
	float fy = 12.345f;
	cout << "12345678901234567890" << endl;
	cout.width(10); cout << ix;
	cout.width(10); cout << fy << endl;
	cout << setw(10) << ix << setw(10) << fy << endl;
	cout << setw(10) << ix; cout.width(10); cout << fy << endl;
}