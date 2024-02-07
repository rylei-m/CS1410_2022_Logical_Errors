#include <iostream>
using namespace std;

int main()
{
	double	f;
	cout << "Enter a temperature in Fahrenheit: ";
	cin >> f;
	//cout << f << endl;

	//cout << 5 / 9 << endl;
	//cout << f - 32 << endl;
	double	c = (f - 32) * (.555556);

	cout << "The temperature in Celsius = " << c << endl;

	return 0;
}