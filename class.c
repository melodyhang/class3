#include <stdio.h>
#include <stdlib.h>
int main()
{

	/*
	int num = 10;
	//int result = num++;
	double result1;
	result1 = num++;
	printf("result = %d\n", result1);	*/



	/*
	int num1 = 10, num2 = 5;
	double result1, result2, result3, result4;
	result1 = num1 / num2;
	result2 = num1 & num2;
	result3 = num1++;
	result4 = --num2;
	printf("result1 = %.2lf\n", result1);
	printf("result2 = %.2lf\n", result2);
	printf("result3 = %.2lf\n", result3);
	printf("result4 = %.2lf\n", result4);
	return 0;*/



	/*
	printf("%d\n", sizeof(long double));
	return 0;
	*/




	/*
	//算数运算符 + - * / %
	//关系运算符 < > <= >= == !=
	//逻辑运算符 && || !
	//赋值运算符 = += -= /= *= %=
	int num = 10;
	int result = num++ >11 || --num < 20;	//短路运算，后面的--num不会运算
	//问题：result=?	num=?
	printf("result=%d\tnum=%d\n", result, num);
	return 0;
	*/



	/*
	运算优先级

	()sizeof ++ --
	!
	算数运算符
	关系运算符
	&&
	||
	赋值运算符	*/


	/*if语句

	//如果总价大于5000就打7折，否则9折
	double price1, price2, price3, total, zhekou;
	price1 = 229.0;
	price2 = 10240.55;
	price3 = 2345.3;
	total = price1 + price2 + price3;
	//如果购买的三种商品有一种商品单价大于1000或
	//三种商品总金额大于5000，折扣率为30%，否则没有折扣
	if (price1 > 1000 || price2 > 1000 || price3 > 1000 || total > 5000)
	{
		zhekou = 0.3;
	}
	else 
	{
		zhekou = 1;
	}
	total *= zhekou;
	printf("败家娘们应付的金额为：%.2lf\n", total);
	return 0;	*/



	/*
	if (total > 5000)
	{
		//total *= 0.7;	//total = total * 0.7
		zhekou = 0.7;
	}
	else
	{
		//total *= 0.9;
		zhekou = 0.9;
	}
	total = total * zhekou;		//total *= zhekou
	printf("败家娘们应付的金额为：%.2lf\n", total);
	return 0;	*/

	//杀鸡刀switch结构的用法
	//一般处理数轴中某几个点的情况
	//想知道某个月有多少天
	//逻辑：用户输入月份，根据月份判断当月的天数
	int month;
	printf("请输入月份，我来判断天数：");
	scanf_s ("%d",&month);
	switch (month)
	{
	case 1:
		printf("%d月有31天。\n", month);
		printf("1月过完就是年。\n");
		break;
	case 2:
		//最好能判断下是否是闰年
		printf("%d月有28天。\n", month);
		break;
	case 3:
		printf("%d月有31天。\n", month);
		break;
	case 4:
		printf("%d月有30天。\n",month);
		break;
	dufult:
		printf("当前程序暂时智能判断1-4月的天数。\n");
	}
	return 0;
	

}