// C2-2 ����ת��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
/*
��Ŀ����
��֪һ��ֻ����0��1�Ķ������������Ȳ�����10������ת��Ϊʮ���Ʋ������

��������
����һ������������n���䳤�Ȳ�����10

�������
���ת�����ʮ��������ռһ��

��������
110

�������
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

