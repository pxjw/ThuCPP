// C4-3 一元二次方程求解.cpp : 定义控制台应用程序的入口点。
/*
题目描述
对于一元二次方程ax^2 + bx + c = 0,解可以分为很多情况。

若该方程有两个不相等实根，首先输出1，换行，然后从小到大输出两个实根，换行；

若该方程有两个相等实根，首先输出2，换行，然后输出这个这个实根，换行；

若该方程有一对共轭复根，输出3，换行；

若该方程有无解，输出4，换行；

若该方程有无穷个解，输出5，换行；

若该方程只有一个根，首先输出6，换行，然后输出这个跟，换行；

要求使用c++ class编写程序。可以创建如下class
输入描述
该一元二次方程的系数a,b,c，且-100=<a,b,c<=100

输出描述
解的情况。输出解的时候保留两位小数

样例输入
1 4 3
样例输出
1
-3.00 -1.00
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
class Equation{
private:
	double _a, _b, _c;
public:
	Equation(double a, double b, double c){
		_a = a;
		_b = b;
		_c = c;
	}
	//计算
	void solve()
	{
		double a = double(_a), b = double(_b), c = double(_c);
		double delta = b * b - 4 * a * c;
		double r1, r2;
		if (a != 0)
		{
			if (delta > 0)
			{
				double temp = sqrt(delta);
				r1 = (-b - temp) / (2 * a);
				r2 = (-b + temp) / (2 * a);
				if (r1 < 0 && r2 < 0 && abs(r1) < abs(r2))
				{
					swap(r1, r2);
				}
				else if (r1 < 0 && r2 > 0 && abs(r1) > abs(r2))
				{
					swap(r1, r2);
				}
				cout << 1 << endl << fixed << setprecision(2) << r2 << ' ' << r1 << endl;
			}
			else if (delta == 0)
			{
				r1 = -b / (2 * a);
				cout << 2 << endl << fixed << setprecision(2) << r1 << endl;
			}
			else
			{
				cout << 3 << endl;
			}
		}
		else
		{
			if (b == 0)
			{
				if (c == 0)
				{
					cout << 5 << endl;
				}
				else
				{
					cout << 4 << endl;
				}
			}
			else
			{
				cout << 6 << endl << fixed << setprecision(2) << -c / b << endl;
			}
		}
		cout << endl;
	}
	//void solve(){
	//	double delta = _b*_b - 4 * _a*_c;

	//}
};
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	Equation tmp(a, b, c);
	tmp.solve();
}
