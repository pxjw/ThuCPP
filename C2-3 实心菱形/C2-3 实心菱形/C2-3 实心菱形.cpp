// C2-3 ʵ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
��Ŀ����
��ӡn��ʵ������
��������
����һ������n��n<=10
�������
���n��ʵ�����Σ�ռ2*n-1��

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

