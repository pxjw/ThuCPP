// C4-1 ���Լ��.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��������
����������a,b������1=<a,b <=10000

�������
a��b�����Լ��

��������
1000 1000
�������
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
	//���캯��
	Integer(int num) {
		//if (!_num){
			_num = num;
		//}
	}
	//���㵱ǰInteger �� b֮������Լ��
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


