// C2-3 实心菱形.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
题目描述
打印n阶实心菱形
输入描述
输入一个整数n，n<=10
输出描述
输出n阶实心菱形，占2*n-1行

*/
#include<iostream>
using namespace std;
int main()
{
	int n, wid, value, space, i;
	cin >> n;
	wid = 2 * n - 1;
	for (i = 1; i <= n; i++)
	{
		value = 2 * i - 1;
		space = (wid - value) / 2;
		for (int x = 1; x <= space; x++){
			cout << " ";
		}
		for (int y = 1; y <= value; y++){
			cout << "*";
		}
		for (int z = 1; z <= space; z++){
			cout << " ";
		}
		cout << endl;
	}
	for (i = n - 1; i >= 1; i--)
	{
		value = 2 * i - 1;
		space = (wid - value) / 2;
		for (int x = 1; x <= space; x++){
			cout << " ";
		}
		for (int y = 1; y <= value; y++){
			cout << "*";
		}
		for (int z = 1; z <= space; z++){
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}


//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

