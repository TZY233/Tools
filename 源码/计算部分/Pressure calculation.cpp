#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <iostream>
using namespace std;
int main()
{
	system("title TZY制作");
	printf("   本程序用于计算物体在液体中受到的压力！\n");
	printf("===========================================\n");
	printf("请输入物体所在液体的密度(kg/每立方)：");
	long double L;
	cin>>L;
	printf("---------------------------------------------\n");
	printf("g取值为9.8还是10？输入1为9.8，输入2为10。\n");
	short a;
	cin>>a;
	if (a==1)
	{
		printf("g取值9.8成功！");
		Sleep(1000);
		system("cls");
		float g=9.8;
		printf("请输入物体浸入液体深度(M)：\n");
		long double h;
		cin>>h;
		printf("-------------------------\n");
		printf("请输入物体在水中的的受力面积(平方米)：");
		long double s;
		cin>>s;
		printf("输入完成！\n");
		system("cls");
		Sleep(1000);
		printf("正");
		Sleep(100);
		printf("在");
		Sleep(100);
		printf("计");
		Sleep(100);
		printf("算\n");
		long double P;
		P=L*g*h;
		long double F;
		F=P*s;
		printf("结果为：%f\n", F);
		printf("计算完成！\n");
		system("pause");
	}
	else if (a==2)
	{
		printf("g取值10成功！");
		Sleep(1000);
		system("cls");
		float g=10.0;
		printf("请输入物体浸入液体深度：\n");
		long double h;
		cin>>h;
		printf("-------------------------\n");
		printf("请输入物体在水中的的受力面积：");
		long double s;
		cin>>s;
		printf("输入完成！\n");
		system("cls");
		Sleep(1000);
		printf("正");
		Sleep(100);
		printf("在");
		Sleep(100);
		printf("计");
		Sleep(100);
		printf("算\n");
		long double P;
		P=L*g*h;
		long double F;
		F=P*s;
		printf("结果为：%f\n", F);
		printf("计算完成！\n");
		system("pause");
	}
	return 0;
}


