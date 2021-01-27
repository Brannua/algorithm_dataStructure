#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	// Complex a;
	// a.setReal(1.0);
	// a.setImage(2.0);
	//// cout << a.getReal() << endl;
	//// cout << a.getImage() << endl;


	// Complex b(2.0, 3.0);
	//// cout << b.getReal() << endl;
	//// cout << b.getImage() << endl;


	//// Complex c;
	//// c = a + b;
	// Complex c = a + b;


	// Complex a(1.0, 2.0);
	//// Complex b = a++++; // 报错
	// Complex b = a++;
	// cout << a.getReal() << endl;
	// cout << a.getImage() << endl;
	// cout << b.getReal() << endl;
	// cout << b.getImage() << endl;
	// Complex c;
	// c = ++++a;
	// cout << a.getReal() << endl;
	// cout << a.getImage() << endl;
	// cout << c.getReal() << endl;
	// cout << c.getImage() << endl;


	Complex a(1.0, 2.0);
	Complex b(2.0, 3.0);
	b += a;
	cout << a << ", " << b << endl;


	Complex c, d;
	cin >> c >> d;
	cout << c << ", " << d << endl;

	cout << (a == b) << (a != b) << endl;
    return 0;
}
