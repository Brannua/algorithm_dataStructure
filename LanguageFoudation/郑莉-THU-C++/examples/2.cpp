#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/**
 * @desc sizeof 运算符用于计算某种类型的对象在内存中所占的字节数
 * sizeof (类型名)
 * sizeof (表达式)
 */
void _sizeOf()
{
	int a = 4;
	cout << sizeof(char) << endl; // 1
	cout << sizeof(a) << endl;	  // 4
	cout << sizeof(5.0) << endl;  // 8
}

// 输出浮点数 3.1415 并换行，设置域宽为 5 个字符，小数点后保留两位有效数字
void _formatCout()
{
	cout << setw(5) << setprecision(3) << 3.1415 << endl;
}

/**
 * @desc 输入一个年份，判断是否是闰年
 * @desc 闰年的年份可以被 4 整除，但是不能被 100 整除，或者能被 400 整除
 */
void _isLeapYear()
{
	int year;
	cout << "Enter the year:";
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		cout << "闰年" << endl;
		return;
	}
	cout << "平年" << endl;
}

// 比较两个数的大小
void _max()
{
	cout << "Enter x and y: ";

	int x, y;
	cin >> x >> y;

	if (x == y)
	{
		cout << "x = y";
		return;
	}
	if (x > y)
	{
		cout << "x > y";
		return;
	}
	cout << "x < y";
}

// 数字转星期
void _num2week()
{
	cout << "请输入 [0, 6] 中任意一个整数: ";

	int num;
	cin >> num;

	switch (num)
	{
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Day out of range Sunday ... Saturday" << endl;
		break;
	}
}

// 求自然数 1~10 之和
void _sum()
{
	////方法一
	//int a = 10, sum = 0;
	//while (a)
	//{
	//	sum += a;
	//	a--;
	//}

	//方法二
	int sum = 0;
	for (int a = 10; a > 0; a--)
	{
		sum += a;
	}
	cout << sum << endl;
}

// 输入一个整数，将各位数字反转后输出
void _reverse()
{
	cout << "Enter a number: ";
	int num;
	cin >> num;

	////方法一
	//int temp;
	//do {
	//	temp = num % 10;
	//	cout << temp;
	//	num = (num - temp) / 10;
	//} while (num > 0);

	//方法二
	for (int temp; num > 0; num = (num - temp) / 10)
	{
		temp = num % 10;
		cout << temp;
	}
	cout << endl;
}

// 输入一个整数，求出它的所有因子
void _yinZi()
{
	cout << "Enter a integer: ";
	int a;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

// 循环结构的嵌套
void _circle()
{
	int i = 1, a = 0;
	for (; i <= 5; i++)
	{
		do
		{
			i++;
			a++;
		} while (i < 3);
		i++;
	}
	cout << a << " " << i << endl;
}

// 打印菱形
void _printDiamond()
{
	//	前 4 行
	for (int i = 1; i < 5; i++)
	{
		// 打印空格
		for (int j = 0; j < 7 - (2 * i - 1); j++)
		{
			cout << " ";
		}
		// 打印星星
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// 后 3 行
	for (int i = 1; i < 4; i++)
	{
		// 打印星星
		for (int j = 0; j < 7 - (2 * i); j++)
		{
			cout << "*";
		}
		// 打印空格
		for (int k = 0; k < 2 * i; k++)
		{
			cout << " ";
		}
		cout << endl;
	}
}

// 读入一系列整数，统计出正整数个数 i 和负整数个数 j，读入 0 则结束
void _count()
{
	// // 方法一
	// int positive = 0, negative = 0, num;
	// cin >> num;
	// while (num != 0)
	// {
	//     if (num > 0)
	// 	{
	// 		positive++;
	// 	}
	// 	if (num < 0)
	// 	{
	// 		negative++;
	// 	}
	//     cin >> num;
	// }
	// cout << "positive: " << positive << " " << "negative: " << negative << endl;

	// 方法二
	int positive = 0, negative = 0, num;
	do
	{
		cin >> num;
		if (num > 0)
		{
			positive++;
		}
		if (num < 0)
		{
			negative++;
		}
	} while (num != 0);
	cout << "positive: " << positive << " "
		 << "negative: " << negative << endl;
}

// 测试 goto 语句
void _testGoto()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i << " " << j << " ";
			goto end;
		}
	}
end:
	cout << "end";
}

// 设某次体育比赛的结果有 4 种可能: 胜( WIN ), 负( LOSE ), 平局( TIE ), 比赛取消( CANCEL ), 编写程序顺序输出这四种情况
void _enumTest()
{
	enum Result
	{
		WIN,
		LOSE,
		TIE,
		CANCEL
	};

	Result res;

	// enum Result omit = CANCEL;	// 也可以在类型名前加 enum

	for (int i = WIN; i <= CANCEL + 1; i++) // 隐含类型转换
	{
		res = Result(i); // 显式类型转换，将 int 类型的 i 强制转换为 enum Result 类型
		if (res == WIN)
		{
			cout << "赢了！" << endl;
		}
		if (res == LOSE)
		{
			cout << "失败~" << endl;
		}
		if (res == TIE)
		{
			cout << "平局" << endl;
		}
		if (res == CANCEL)
		{
			cout << "取消了" << endl;
		}
	}
}

// 输出数据类型的字节数
void _printTypeByteSize()
{
	cout << "char size: " << sizeof(char) << " bytes." << endl;
	cout << "short size: " << sizeof(short) << " bytes." << endl;
	cout << "int size: " << sizeof(int) << " bytes." << endl;
	cout << "long size: " << sizeof(long) << " bytes." << endl;
	cout << "float size: " << sizeof(float) << " bytes." << endl;
	cout << "double size: " << sizeof(double) << " bytes." << endl;
}

// 打印 ASCII 码为 32~127 的字符
void _ASCII2Char()
{
	for (int i = 32; i < 128; i++)
	{
		cout << "i: " << i << " -> " << char(i) << endl;
	}
}

// 注意数据类型
void _difference()
{
	unsigned int x;
	unsigned int y = 100;
	unsigned int z = 50;

	x = y - z;
	cout << "Difference is: " << x;
	x = z - y;
	cout << "\nNow Difference is: " << x << endl;
}

void _test()
{
	int a = 1, b = 2, c = 3;
	cout << (a | b - c) << endl;  // 0  -1，b-c优先级高
	cout << (a ^ b & -c) << endl; // 1
	cout << (a & b | c) << endl;  // 3
	cout << (a | b & c) << endl;  // 3
	cout << (!a | a) << endl;	  // 1
	cout << (~a | a) << endl;	  // 3  -1，取反优先级高
	cout << (a ^ a) << endl;	  // 0
	cout << (a >> 2) << endl;	  // 0
}

/**
 * @desc 向用户提问"现在正在下雨吗？"，
 * @desc 提示用户输入 Y 或 N，若输入 Y，显示现在正在下雨；若输入 N，显示现在没有下雨
 * @desc 否则继续提问"现在正在下雨吗？"
 */
void _isRain()
{
	char key;

	do
	{
		cout << "现在正在下雨吗？(Y or N): ";
		cin >> key;
	} while (key != 'Y' && key != 'N');

	if (key == 'Y')
	{
		cout << "现在正在下雨" << endl;
	}
	if (key == 'N')
	{
		cout << "现在没有下雨" << endl;
	}
}

/**
 * @desc 向用户提问 “你考了多少分？（0~100）”，接收输入后判断其等级显示出来
 */
void _printLevel()
{
	//// 方法一
	// cout << "你考了多少分？（0~100）: ";
	// float score;
	// cin >> score;
	// if (score > 100 || score < 0) // 临界条件判断 & 处理
	// {
	// 	cout << "分数值必须在 0 到 10 之间 ！" << endl;
	// }
	// if (score >= 90 && score <= 100)
	// {
	// 	cout << score << ": 优" << endl;
	// }
	// if (score >= 80 && score < 90)
	// {
	// 	cout << score << ": 良" << endl;
	// }
	// if (score >= 60 && score < 80)
	// {
	// 	cout << score << ": 中" << endl;
	// }
	// cout << score << ": 差" << endl;

	// 方法二
	cout << "你考了多少分？（0~100）: ";
	float score;
	cin >> score;
	switch (int(score / 10))
	{
	case 10:
	case 9:
		cout << score << ": 优" << endl;
		break;
	case 8:
		cout << score << ": 良" << endl;
		break;
	case 7:
	case 6:
		cout << score << ": 中" << endl;
		break;
	default:
		cout << score << ": 差" << endl;
		break;
	}
}

/**
 * @desc 菜单程序，运行时显示 "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: "，提示用户输入
 * @desc 输入为 A，D，S 时分别提示 "数据已经增加，删除，排序"，输入为 Q 时程序结束
 * @tips (第 1 问) 要求使用 if...else 语句进行判断，用 break，continue 控制程序流程
 * @tips (第 2 问) 要求使用 switch 语句
 */
void _menu()
{
	// (第 1 问)
	while (true)
	{
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: ";
		char key;
		cin >> key;
		key = toupper(key);
		if (key == 'A')
		{
			cout << "数据已经增加" << endl;
			continue;
		}
		if (key == 'D')
		{
			cout << "数据已经删除" << endl;
			continue;
		}
		if (key == 'S')
		{
			cout << "数据已经排序" << endl;
			continue;
		}
		if (key == 'Q')
		{
			break;
		}
	}

	// // (第 2 问)
	// while (true)
	// {
	// 	cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: ";
	// 	char key;
	// 	cin >> key;
	// 	// 类型转换的原则: 不丢失精度
	// 	switch (toupper(key)) // 隐式类型转换
	// 	{
	// 	case 'A': // 隐式类型转换
	// 		cout << "数据已经增加" << endl;
	// 		break;
	// 	case 'D': // 隐式类型转换
	// 		cout << "数据已经删除" << endl;
	// 		break;
	// 	case 'S': // 隐式类型转换
	// 		cout << "数据已经排序" << endl;
	// 		break;
	// 	default:
	// 		exit(0);
	// 	}
	// }
}

/**
 * @desc 用穷举法找出 1~100 间的质数，分别用 while，do...while，for 循环实现
 * @tips 质数是指在大于 1 的自然数中，除了 1 和它本身以外不再有其他因数的自然数
 */
void _zhiShu()
{
	// 方法一: for 循环
	for (int i = 2; i <= 100; i++)
	{
		int times = 0;
		for (int j = 1; j < sqrt(i); j++)
		{
			i % j == 0 && times++;
		}
		times == 1 && cout << i << endl;
	}

	// // 方法二: while 循环
	// int num = 100;
	// while (num > 1)
	// {
	// 	int times = 0, j = 1;
	// 	while (j < sqrt(num))
	// 	{
	// 		num % j == 0 && times++;
	// 		j++;
	// 	}
	// 	times == 1 && cout << num << endl;
	// 	num--;
	// }

	// // 方法三
	// int num = 100;
	// do {
	// 	int times = 0, j = 1;
	// 	while (j < sqrt(num))
	// 	{
	// 		num % j == 0 && times++;
	// 		j++;
	// 	}
	// 	times == 1 && cout << num << endl;
	// 	num--;
	// } while (num > 1);
}

/**
 * @desc 声明一个表示时间的结构体，可以精确表示 年月日，提示用户输入 年月日 的值，然后完整地显示出来
 */
void _printTime()
{
	struct TIME {
		int year;
		int month;
		int day;
	};

	TIME time;

	cout << "请输入年: ";
	cin >> time.year;
	cout << "请输入月: ";
	cin >> time.month;
	cout << "请输入日: ";
	cin >> time.day;

	cout << time.year << "年 " << time.month << "月 " << time.day << "日" << endl;
}

/**
 * @desc 定义一个整型变量，赋予 1~100 的值，要求用户猜这个数，比较两个数的大小，把结果提示给用户，直到猜对为止
 * @tips 分别用 while 和 do...while 实现
 */
void _caiNum()
{
	// float num = 67, iptNum = 0;
	// while (iptNum != num)
	// {
	// 	cout << "Please input a number: ";
	// 	cin >> iptNum;
	// 	if (iptNum > num)
	// 	{
	// 		cout << "比答案大~" << endl;
	// 	}
	// 	if (iptNum < num)
	// 	{
	// 		cout << "比答案小~" << endl;
	// 	}
	// }
	// cout << "没错！答案就是: " << iptNum << endl;

	float num = 67, iptNum = 0;
	do
	{
		cout << "Please input a number: ";
		cin >> iptNum;
		if (iptNum > num)
		{
			cout << "比答案大~" << endl;
		}
		if (iptNum < num)
		{
			cout << "比答案小~" << endl;
		}
	} while (iptNum != num);
	cout << "没错！答案就是: " << iptNum << endl;
}

/**
 * @desc 声明枚举类型 Weekday，包括 Sunday 到 Saturday 7 个元素
 * @desc 声明 Weekday 类型的变量，对其赋值
 * @desc 声明整型变量，看看能否对其赋 Weekday 类型的值
 */
void _testEnum()
{
	enum Weekday
	{
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	Weekday foo, fee;
	foo = Sunday;
	cout << foo;
	// int demo = 1;
	// fee = demo; // 不能将 "int" 类型的值分配到 "Weekday" 类型的实体
}

/**
 * @desc 口袋中有 红黄蓝白黑 共 5 种颜色的球若干个，每次从口袋中取出 3 个不同颜色的球，问有多少种取法
 */
void _getBall()
{
	int time = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				time++;
			}
		}
	}
	cout << time << endl;
}

/**
 * @desc 输出 9*9 乘法表
 * 1 * 1 = 1
 * 2 * 1 = 2 2 * 2 = 4
 * 3 * 1 = 3 3 * 2 = 6 3 * 3 = 9
 * 4 * 1 = 4 4 * 2 = 8 4 * 3 = 12 4 * 4 = 16
 * ...
 */
void _nine()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " * " << j << " = " << (i * j) << " ";
		}
		cout << endl;
	}
}

int main()
{
	// _sizeOf();
	// _formatCout();
	// _isLeapYear();
	// _max();
	// _num2week();
	// _sum();
	// _reverse();
	// _yinZi();
	// _circle();
	// _printDiamond();
	// _count();
	// _testGoto();
	// _enumTest();
	// _printTypeByteSize();
	// _ASCII2Char();
	// _difference();
	// _test();
	// _isRain();
	// _printLevel();
	// _menu();
	// _zhiShu();
	// _printTime();
	// _caiNum();
	// _testEnum();
	// _getBall();
	// _nine();
	return 0;
}
