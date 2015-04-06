// C2-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
using namespace std;
int main()
{
	int n, x;
	int sum = 0;
	int minval = 0;
	int maxval = 0;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> x;
		sum += x;
		if (x <= minval){
			//if(maxval){}
			//min(max{std::advance(min)})
			minval = x;
		}
		if (x >= maxval){
			maxval = x;
		}

	}
	cout << sum << " " << minval << " " << maxval;
	return 0;
}

//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

