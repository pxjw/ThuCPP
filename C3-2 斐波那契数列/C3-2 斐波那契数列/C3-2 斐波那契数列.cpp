// C3-2 쳲���������.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��Ŀ����
쳲���������f(n)�������¶��壺
f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)��
���õݹ�ķ�����д���������ڸ�����n�����쳲��������еĵ�n��f(n)

��������
ÿ������һ������n
0 <= n<= 30

�������
����ÿһ�����룬���쳲��������е�n���ֵf(n)

��������
1
10
25

������� 
1
89
121393
*/
#include "stdafx.h"
#include<iostream>
int fib(int n){
	if (n == 0){
		return 1;
	}
	else if (n == 1){
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main(){
	int n;
	std::cin >> n;
	std::cout << fib(n);
}

//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

