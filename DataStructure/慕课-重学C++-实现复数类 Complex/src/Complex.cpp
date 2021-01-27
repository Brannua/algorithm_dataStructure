#include "Complex.h"
#include <iostream>
using namespace std;

// 实现: 构造函数
Complex::Complex()
{
	cout << "Complex::Complex()" << endl;
}

// 实现: 重载构造函数
Complex::Complex(double r, double i)
{
	_real = r;
	_image = i;
	cout << "Complex::Complex(double r, double i)" << endl;
}

// 实现: 虚析构函数
Complex::~Complex()
{
	cout << "Complex::~Complex()" << endl;
}

// 实现: 拷贝构造函数
Complex::Complex(const Complex& x)
{
	_real = x._real;
	_image = x._image;
	cout << "Complex::Complex(const Complex& x)" << endl;
}

// 实现: 运算符重载
Complex Complex::operator+ (const Complex& x) const
{
	//// 由于 temp 在 栈 上，出了 {} 这个 scope 就被释放掉了
	//// 所以在执行 return 语句，出大括号之前发生了拷贝构造
	//// 开辟了一块临时的内存空间用以存储 temp 的副本
	//// 这个副本供外部使用，用完则释放
	// Complex temp;
	// temp._real = _real + x._real;
	// temp._image = _image + x._image;
	// return temp;
	return Complex(_real + x._real, _image + x._image);
}

// 实现: 运算符重载
void Complex::operator= (const Complex& x)
{
	if (this != &x)
	{
		_real = x._real;
		_image = x._image;
	}
}

// 实现: 运算符重载 (前置 ++)
Complex& Complex::operator++ ()
{
	_real++;
	_image++;
	return *this;
}

// 实现: 运算符重载 (后置 ++)
const Complex Complex::operator++ (int)
{
	// Complex temp(*this); // 触发拷贝构造
	// _real++;
	// _image++;
	// return temp; // 触发拷贝构造
	return Complex(_real++, _image++);
}

// 实现: 运算符重载 ( << ) --输出形如--> {_real: 1.0, _image: 2.0}
ostream& operator<< (ostream& os, const Complex& x)
{
	os << "{_real:" << x._real << ", _image:" << x._image << "}";
	return os;
}

// 实现: 运算符重载 ( >> )
istream& operator>> (istream& is, Complex& x)
{
	is >> x._real >> x._image;
	return is;
}

bool Complex::operator== (const Complex& x)
{
	return ( (_real == x._real) && (_image == x._image) );
}

bool Complex::operator!= (const Complex& x)
{
	return !( (_real == x._real) || (_image == x._image) );
}

Complex& Complex::operator+= (const Complex& x)
{
	_real += x._real;
	_image += x._image;
	return *this;
}
