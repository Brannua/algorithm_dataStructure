// /**
//  * 定义一个 Cat 类，拥有静态数据成员 HowManyCats，记录 Cat 的个体数目
//  * 静态成员函数 GetHowMany()，存取 HowManyCats，设计程序测试这个类
//  * 体会静态数据成员和静态成员函数的用法
//  */
// #include <iostream>
// using namespace std;

// class Cat
// {
// public:
//     Cat();
//     ~Cat() { HowManyCats--; };
//     static int GetHowMany() { return HowManyCats; };

// private:
//     static int HowManyCats;
// };

// Cat::Cat()
// {
//     HowManyCats++;
// }

// int Cat::HowManyCats = 0;

// int main()
// {
//     Cat a;
//     Cat b;
//     cout << Cat::GetHowMany() << endl;
//     Cat c;
//     cout << Cat::GetHowMany() << endl;
//     return 0;
// }


// --------------------------------------------------------------------------------------


// // 定义 Boat 与 Car 两个类，二者都有weight属性，
// // 定义二者的一个友元函数totalWeight()，计算二者的重量和
// #include <iostream>
// using namespace std;

// class Car;
// class Boat
// {
// public:
//     friend void totalWeight(Boat &a, Car &b);

// private:
//     int weight = 1;
// };

// class Car
// {
// public:
//     friend void totalWeight(Boat &a, Car &b);

// private:
//     int weight = 2;
// };

// void totalWeight(Boat &a, Car &b)
// {
//     cout << (a.weight + b.weight) << endl;
// }

// int main()
// {
//     Car a;
//     Boat b;
//     totalWeight(b, a);
//     return 0;
// }
