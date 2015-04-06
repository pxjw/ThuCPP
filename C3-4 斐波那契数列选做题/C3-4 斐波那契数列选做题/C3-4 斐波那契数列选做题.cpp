// C3-4 쳲���������ѡ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
��Ŀ����
쳲���������f(n)�������¶��壺

f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)��

��������ݹ�ģ��ԭ�ȸ���

��������
ÿ������һ������n
0 <= n<= 80

�������
����ÿһ�����룬���쳲��������е�n���ֵf(n)
��������
44
77
������� 1134903170
8944394323791464
*/
//Ҳ����ʹ�õ�����������Ч��
#include<iostream>
using namespace std;
long long fib(int n){
	if (n == 0 || n == 1){
		return 1;
	}
	long long f0 = 1,f1 = 1;
	long long carryflag;
	for (int i = 1; i < n; i++){
		carryflag = f0 + f1;
		f0 = f1;
		f1 = carryflag;
	}
	return carryflag;
}
int main(){
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}