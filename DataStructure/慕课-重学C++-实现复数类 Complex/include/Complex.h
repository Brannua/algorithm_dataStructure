#pragma once
#include "iostream"
using namespace std;

class Complex
{
public:
	Complex();					 // 声明: 构造函数
	virtual ~Complex();			 // 声明: 虚析构函数
	Complex(double r, double i); // 声明: 重载构造函数
	Complex(const Complex& x);	 // 声明: 拷贝构造函数

	// 编译器会做代码优化，会将头文件中实现好的 简单函数 转化为 内联函数，是一种 空间换时间 的操作，高效。
	double getReal() { return _real; };
	double getImage() { return _image; };
	void setReal(double r) { _real = r; };
	void setImage(double i) { _image = i; };

	// 声明: 运算符重载
	Complex operator+ (const Complex& x) const; // 参数中的 const 是指不允许修改引用 x 中的值
	void operator= (const Complex& x); 			// 参数中的 const 是指不允许修改引用 x 中的值
	Complex& operator++ ();						// 前置 ++
	const Complex operator++ (int);				// 后置 ++
	bool operator== (const Complex& x);
	bool operator!= (const Complex& x);
	Complex& operator+= (const Complex& x);
	
	friend ostream& operator<< (ostream& os, const Complex& x);
	friend istream& operator>> (istream& is, Complex& x);
private:
	double _real;  // 复数的实部
	double _image; // 复数的虚部
};
