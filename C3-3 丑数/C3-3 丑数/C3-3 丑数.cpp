// C3-3 ����.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��Ŀ����
ֻ��������2,3,5������������������������4,10,12���ǳ�������7,23,111���ǳ���������1Ҳ���ǳ�����
���дһ������������һ������n���ܹ��жϸ������Ƿ�Ϊ����������ǣ������True���������False��
��������
ÿ������һ��������n

1 <= n<= 1000000
�������
����ÿһ�����룬������Ƿ�Ϊ�������������True���������False
��������
4
7
12

������� True
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

