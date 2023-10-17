// laba5.1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y); // прототип
int main()
{
	double s;
	double t; 
	cout << "s ="; cin >> s;
	cout << "t ="; cin >> t;
	double c =  h(1, s + t) + h(s, s - t) - h(t, sqrt(s * s + t * t));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y) // визначення
{
	return (pow(x, 2) + pow(y, 2) / (1 + pow(x, 2) + pow(x, 2)) * pow(y, 2));
}