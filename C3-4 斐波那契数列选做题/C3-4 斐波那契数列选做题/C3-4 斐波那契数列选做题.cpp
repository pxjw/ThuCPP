// C3-4 斐波那契数列选做题.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
题目描述
斐波那契数列f(n)满足以下定义：

f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)。

本题的数据规模比原先更大

输入描述
每行输入一个整数n
0 <= n<= 80

输出描述
对于每一行输入，输出斐波那契数列第n项的值f(n)
样例输入
44
77
样例输出 1134903170
8944394323791464
*/
//也就是使用迭代法，考虑效率
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