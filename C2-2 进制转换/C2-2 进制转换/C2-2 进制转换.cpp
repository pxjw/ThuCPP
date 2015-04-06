// C2-2 进制转换.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
/*
题目描述
已知一个只包含0和1的二进制数，长度不大于10，将其转换为十进制并输出。

输入描述
输入一个二进制整数n，其长度不大于10

输出描述
输出转换后的十进制数，占一行

样例输入
110

样例输出
6
*/
int main()
{
	int x, i, dec = 0;
	cin >> x;
	for (i = 0; x / 10 != 0; i++){
		dec += (int)pow(2, i)*(x % 10);
		x /= 10;
	}
	dec += (int)pow(2, i)*(x % 10);
	cout << dec;
}


//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

