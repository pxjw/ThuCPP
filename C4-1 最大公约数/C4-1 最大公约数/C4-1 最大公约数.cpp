// C4-1 最大公约数.cpp : 定义控制台应用程序的入口点。
//
/*
输入描述
两个正整数a,b，并且1=<a,b <=10000

输出描述
a和b的最大公约数

样例输入
1000 1000
样例输出
1000
*/
#include "stdafx.h"
/* students please write your program here */

#include <iostream>
using namespace std;
void int_swap(int &a,int &b)
{
	a = a^b;
	b = a^b;
	a = a ^b;
}
class Integer {
private:
	int _num;
public:
	//构造函数
	Integer(int num) {
		//if (!_num){
			_num = num;
		//}
	}
	//计算当前Integer 和 b之间的最大公约数
	int gcd(Integer b) {
		int temp, val_max, val_min;
		if (_num > b._num){
			val_max = _num;
			val_min = b._num;
		}
		else
		{
			val_max = b._num;
			val_min = _num;
		}
		if (val_max%val_min == 0){
			return val_min;
		}
		else
		{
			while (val_max%val_min){
				temp = val_min;
				val_min = val_max%val_min;
				val_max = temp;
			}
			return val_min;
		}
		/*int j = b._num;
		int temp = 1;
		if (_num < j){
			while (_num){
				temp =_num;
				_num = _num%j;
				j = temp;

			}
		}
		else
		{
			int_swap(_num, j);
			while (_num){
				temp = _num;
				_num = _num%j;
				j = temp;

			}
		}
		return j;*/
	}
};
int main(){
	int a, b;
	cin >> a >> b;
	Integer A(a);
	Integer B(b);
	cout << A.gcd(B) << endl;
	return 0;
}


