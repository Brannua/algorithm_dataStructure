#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 计算 x 的 n 次方
double pow(double x, int n)
{
	double val = 1.0;
	while (n--)
	{
		val *= x;
	}
	return val;
}

// 输入一个 8 位 2 进制数，将其转换为 10 进制数输出
// 00000010 --> 2^0 * 0 + 2^1 * 1 + 2^2 * 0 + ...
int b2d()
{
	cout << "Enter an 8 bit binary number: ";
	int cur, sum = 0;
	for (int i = 7; i >= 0; i--)
	{
		cin >> cur;
		if (cur == 1)
		{
			sum += pow(2, i);
		}
	}
	return sum;
}

// 寻找并输出 11~999 之间的数 m，它满足 m，m^2 和 m^3 均为回文数
// 如 m = 11, m^2 = 121, m^3 = 1331
bool _isReverse(int num)
{
	if (num < 0 || num % 10 == 0 && num != 0)
	{
		return false;
	}

	int revertedNum = 0;
	while (revertedNum < num)
	{
		revertedNum = revertedNum * 10 + num % 10;
		num /= 10;
	}

	return num == revertedNum || num == (revertedNum / 10);
}
void superReverse()
{
	for (int i = 11; i < 1000; i++)
	{
		_isReverse(i) && _isReverse(i * i) && _isReverse(i * i * i) && cout << i << " " << i * i << " " << i * i * i << endl;
	}
}

// 编写程序求 派 的值，公式: 派 = arctan(1/5) - 4arctan(1/239)
// arctan 用级数计算，arctanx = x - (1/3)*x^3 + (1/5)*x^5 - (1/7)*x^7 + ...
// 直到级数某项绝对值不大于 10^-15 为止，派 和 x 均为 double 型

// 例题 3.5

// 例题 3.6 投骰子游戏，程序开始时，输入一个无符号整数，作为产生随机数的种子
// 每轮投两次骰子，第一轮如果和数为 7 或 11 则为胜，游戏结束；和数为 2 或 3 或 12 则为负，游戏结束；
// 和数为其它值则将此值作为自己的点数，继续第 2 轮，第 3 轮...，直到某轮的和数等于点数则取胜
// 若在此前出现和数为 7 则为负
// 由 rollDice 函数负责模拟投骰子，计算和数并输出和数

// 求 n！
int _jieCheng(int n)
{
	if (n < 0)
	{
		cout << "n 必须大于等于 0" << endl;
		return -1;
	}
	if (n == 0)
	{
		return 1;
	}
	return n * _jieCheng(n - 1);
}

// 用递归法计算从 n 个人中选择 k 个人组成一个委员会的不同组合数
int _countGroup(int n, int k)
{
	//// 我的思路
	// if (n <= 0 || k <= 0 || n < k)
	// {
	// 	return 0;
	// }
	// if (n == k)
	// {
	// 	return 1;
	// }
	// // 先挑出一个人，分为两种情况，这个人分到了组委会，这个人没分到组委会
	// return _countGroup(n-1, k) + _countGroup(n-1, k-1);

	// 答案的思路
	if (k > n)
	{
		return 0;
	}
	if (n == k || k == 0)
	{
		return 1;
	}
	return _countGroup(n - 1, k) + _countGroup(n - 1, k - 1);
}

// 例题 3.10 汉诺塔问题
void _printMov(char src, char dst)
{
	cout << src << "-->" << dst << endl;
}
void hanoi(int n, char src, char mid, char dst)
{
	if (n < 1)
	{
		return;
	}
	if (n == 1)
	{
		_printMov(src, dst);
		return;
	}
	hanoi(n - 1, src, dst, mid);
	_printMov(src, dst);
	hanoi(n - 1, mid, src, dst);
}

// 一道题
void _aTest()
{
	int a, b, c, d;
	a = b = c = 1;
	d = ++a || ++b && ++c; // 1.短路特性 2.逻辑运算返回布尔值 3.布尔输出到屏幕默认为 0 或 1
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}

// 交换两个数
void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

// 测试值传递和引用传递
void fiddle(int in1, int &in2)
{
	in1 += 100;
	in2 += 100;
	cout << setw(5) << in1;
	cout << setw(5) << in2 << endl;
}

// 输入一个角度值，求其三角函数值
void sanJiaoFn()
{
	const double PI = 3.1415926535;
	double angle;
	cin >> angle;
	angle = angle / 180 * PI;

	cout << sin(angle) << endl;
	cout << cos(angle) << endl;
	cout << tan(angle) << endl;
}

// 求两个整数的最大公约数
int fn(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		cout << "以下只讨论两个正整数" << endl;
		exit(0);
	}
	if (a == b)
	{
		// cout << "最大公约数: " << a << endl;
		// cout << "最小公倍数: " << a << endl;
		return a;
	}

	// 令 a 是小的，b 是大的
	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	//// 枚举法
	// int res;
	// for (int i = a; i > 0; i--)
	// {
	// 	if (b % i == 0 && a % i == 0)
	// 	{
	// 		res = i;
	// 		break;
	// 	}
	// }
	// cout << "最大公约数: " << res << endl;
	// cout << "最小公倍数: " << a * b / res << endl;

	// 辗转相除法
	int temp = b % a, total = a * b;
	while (temp != 0)
	{
		b = a;
		a = temp;
		temp = b % a;
	}
	// cout << "最大公约数: " << a << endl;
	// cout << "最小公倍数: " << total / a << endl;
	return a;
}

// 求 N 个数的最大公约数
int fn2(int arr[], int length)
{
	if (length == 1)
	{
		return arr[0];
	}
	return fn(fn2(arr, length - 1), arr[length - 1]);
}

// 编写递归函数计算 x 的 y 次幂，在主程序中实现输入输出
double GetPower(int x, int y)
{
	if (x == 0 && y == 0)
	{
		cout << "不考虑底数和指数同时为 0 的情况！" << endl;
		return -1;
	}

	if (y == 1)
	{
		return x;
	}

	if (y < 0)
	{
		return 1.0 / x * GetPower(x, y - 1);
	}

	if (y > 0)
	{
		return x * GetPower(x, y - 1);
	}

	return 1;
}

// 用递归的方法编写函数求 Fibonacci 级数
// 公式为 fib(n) = fib(n-1) + fib(n-2)，n>2; fib(1) = fib(2) = 1; 观察递归调用的过程
int fib(int x)
{
	if (x == 1 || x == 2)
	{
		return 1;
	}
	return fib(x - 1) + fib(x - 2);
}

// 用递归的方法编写函数求 n 阶勒让德多项式的值
int legendre(int n, int x)
{
	if (n < 0 || (n > 0 && n < 1))
	{
		cout << "只考虑 n 不小于 0 的情况！" << endl;
		return -1;
	}
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return x;
	}
	return ((2 * n - 1) * x * legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / n;
}

int main()
{
	// cout << pow(2.2, 2) << endl;
	// cout << b2d() << endl;

	// int a = 1, b = 2;
	// cout << "a: " << a << " b: " << b << endl;
	// swap(a, b);
	// cout << "a: " << a << " b: " << b << endl;

	// int v1 = 7, v2 = 12;
	// cout << setw(5) << v1;
	// cout << setw(5) << v2 << endl;
	// fiddle(v1, v2);
	// cout << setw(5) << v1;
	// cout << setw(5) << v2 << endl;

	// sanJiaoFn();
	// _aTest();
	// cout << _jieCheng(5) << endl;
	// cout << _countGroup(18, 5) << endl;
	// hanoi(3, 'A', 'B', 'C');
	// superReverse();
	// fn(120, 72);
	// cout << GetPower(3, 4) << endl;

	// int arr[] = { 24, 10, 12 };
	// int res = fn2(arr, 3);
	// cout << res;


	return 0;
}
