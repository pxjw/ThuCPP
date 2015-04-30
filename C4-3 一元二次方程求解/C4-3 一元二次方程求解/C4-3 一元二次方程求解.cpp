// C4-3 һԪ���η������.cpp : �������̨Ӧ�ó������ڵ㡣
/*
��Ŀ����
����һԪ���η���ax^2 + bx + c = 0,����Է�Ϊ�ܶ������

���÷��������������ʵ�����������1�����У�Ȼ���С�����������ʵ�������У�

���÷������������ʵ�����������2�����У�Ȼ�����������ʵ�������У�

���÷�����һ�Թ���������3�����У�

���÷������޽⣬���4�����У�

���÷�����������⣬���5�����У�

���÷���ֻ��һ�������������6�����У�Ȼ���������������У�

Ҫ��ʹ��c++ class��д���򡣿��Դ�������class
��������
��һԪ���η��̵�ϵ��a,b,c����-100=<a,b,c<=100

�������
��������������ʱ������λС��

��������
1 4 3
�������
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
	//����
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
