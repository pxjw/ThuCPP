// C3-1 直角三角形.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
bool isRtriangle(int a,int b,int c){
	bool isRT = false;
	if (a*a + b*b == (c*c) || c*c + a*a == (b*b) || b*b + c*c == (a*a)){
		isRT = true;
	}
	return isRT;
}
int main()
{
	int a, b, c;
	std::string tag;
	std::cin >> a >> b >> c;
	if (isRtriangle(a,b,c) == 0){
		tag = "False";
	}
	else{
		tag = "True";
	}
	std::cout << tag;
}
/*
输入一个三角形的3边长度，判断该三角形是否为直角三角形，若是则输出True，若不是则输出False。推荐做法：定义一个函数，接受三个int参数，返回bool，再用主函数调用之。

每行输入三个由空格隔开的整数a, b, c，表示三角形的3条边长

1 <= a,b,c<= 10000

对于每一行输入，输出True或者False表明是否为直角三角形

样例输入 
3 4 5
6 7 8
1 1 1

样例输出 
True
False
False
*/

//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

