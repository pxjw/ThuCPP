// C4-2 ��ת����.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��������
һ��������a ����1=<a<=1,000,000,000

�������
a�ķ�ת��ʽ

��������
1011
�������
1101
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

class Integer{
private:
	int _num;
	//getLength()������ȡ_num����
	int getLength(){
		//int temp = 1;
		//while (_num>=10){
		//	_num /= 10;
		//	temp++;
		//}
		//return temp;
	}
public:
	//Integer�๹�캯��
	Integer(int num){
		_num = num;
	}
	//��ת_num
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
