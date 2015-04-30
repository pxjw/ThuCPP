// C5-1 ������.cpp : �������̨Ӧ�ó������ڵ㡣
/*
��Ŀ����
��ʵ��һ���������࣬�����Ѹ�������ģ�壬�����main�����жԸ���Ĳ�����������ʵ�ֲ�����ɴ��롣

����������Լ�¼�˻�����Ǯ��ȡǮ��������Ϣ��
��������һ��˽�о�̬��Ա����profitRate�洢�����������ʣ������ù��о�̬��Ա����setProfitRate�޸����ʵ�ֵ��
��������Ϊ��1������n������n����˻�������ÿ��ֻ�ܽ���һ���˻�����������ȡ��
ÿһ���������Ϣ��ǰһ����˻�����롰�������ʵĳ˻�����������Ϣ����Ҳ�������˻���
���ڵ�1��֮ǰ�˻������ڣ����Ե�1��һ�����½��˻�����Ǯ���ҵ��첻������Ϣ������
�����ڽ���n������������Ҫ��������n�������ɺ���˻���������������£�

��������
ÿ��������n+2��

��1������һ������n����ʾ��������n��Ĳ���
��2������һ��ʵ����Ϊ�����������ʣ�n�������ʲ���
��������n�У�����n��Ĳ�����ÿ����2��������1������0��1��0��ʾ��Ǯ��1��ʾȡǮ���ڶ���ʵ��Ϊ��ȡ�Ľ��

1 <= n <= 20

�������
����ÿһ�������������n�������ɺ���˻����

��������
3
0.1
0 10
0 10
1 10
�������
13.1
*/

#include "stdafx.h"

#include <iostream>
using namespace std;

class Yuebao
{
	static double profitRate;
	double amount;
public:
	static void setProfitRate(double rate)
	{
		profitRate = rate;
	};
	Yuebao(double amount){
		this->amount = amount;
	}
	void addProfit(){
		amount += profitRate*amount;
	}
	void deposit(double amount){
		this->amount += amount;
	}
	void withdraw(double amount){
		this->amount -= amount;
	}
	double getBalance()
	{
		return amount;
	}
	/* Your code here! */
};
double Yuebao::profitRate = 0;
int main()
{
	int n;
	while (cin >> n)
	{
		double profitRate;
		cin >> profitRate;
		Yuebao::setProfitRate(profitRate);//�趨��������
		Yuebao y(0); //�½����˻�������ʼ��Ϊ0
		int operation;//���������ж��Ǵ滹��ȡ
		double amount;//���������ȡ���
		for (int i = 0; i < n; ++i)
		{
			y.addProfit();//����ǰһ������������Ϣ
			cin >> operation >> amount;
			if (operation == 0)
				y.deposit(amount);//������
			else
				y.withdraw(amount);//ȡ�����
		}
		cout << y.getBalance() << endl;//��������˻����
	}
	return 0;
}