// C3-1 ֱ��������.cpp : �������̨Ӧ�ó������ڵ㡣
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
����һ�������ε�3�߳��ȣ��жϸ��������Ƿ�Ϊֱ�������Σ����������True�������������False���Ƽ�����������һ����������������int����������bool����������������֮��

ÿ�����������ɿո����������a, b, c����ʾ�����ε�3���߳�

1 <= a,b,c<= 10000

����ÿһ�����룬���True����False�����Ƿ�Ϊֱ��������

�������� 
3 4 5
6 7 8
1 1 1

������� 
True
False
False
*/

//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

