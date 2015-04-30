// C4-2 反转整数.cpp : 定义控制台应用程序的入口点。
//
/*
输入描述
一个正整数a ，且1=<a<=1,000,000,000

输出描述
a的反转形式

样例输入
1011
样例输出
1101
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

class Integer{
private:
	int _num;
	//getLength()函数获取_num长度
	int getLength(){
		//int temp = 1;
		//while (_num>=10){
		//	_num /= 10;
		//	temp++;
		//}
		//return temp;
	}
public:
	//Integer类构造函数
	Integer(int num){
		_num = num;
	}
	//反转_num
	int inversed(){
		int a[20], n = 0;
		while (_num){
			a[++n] = _num % 10;
			_num /= 10;
		}
		for (int i = 1; i <= n; i++){
			_num = _num * 10 + a[i];
		}
		return _num;
	}
};

int main() {
	int n;
	cin >> n;
	Integer integer(n);
	cout << integer.inversed() << endl;
}
