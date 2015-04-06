// C3-3 丑数.cpp : 定义控制台应用程序的入口点。
//
/*
题目描述
只包含因子2,3,5的正整数被称作丑数，比如4,10,12都是丑数，而7,23,111则不是丑数，另外1也不是丑数。
请编写一个函数，输入一个整数n，能够判断该整数是否为丑数，如果是，则输出True，否则输出False。
输入描述
每行输入一个正整数n

1 <= n<= 1000000
输出描述
对于每一行输入，输出其是否为丑数，是则输出True，否则输出False
样例输入
4
7
12

样例输出 True
False
True
*/
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n; cin >> n;
	if (n == 1) {
		cout << "False";
	}
	else{
		if (n % 2 == 0)
		{
			while (n % 2 == 0){ n /= 2; }
		}
		if (n % 3 == 0)
		{
			while (n % 3 == 0){ n /= 3; }
		}
		if (n % 5 == 0)
		{
			while (n % 5 == 0){ n /= 5; }
		}
		if (n > 1)
			cout << "False";
		else
			cout << "True";
	}
	return 0;
}
//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

