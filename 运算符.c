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
	//��������� + - * / %
	//��ϵ����� < > <= >= == !=
	//�߼������ && || !
	//��ֵ����� = += -= /= *= %=
	int num = 10;
	int result = num++ >11 || --num < 20;	//��·���㣬�����--num��������
	//���⣺result=?	num=?
	printf("result=%d\tnum=%d\n", result, num);
	return 0;
	*/



	/*
	�������ȼ�

	()sizeof ++ --
	!
	���������
	��ϵ�����
	&&
	||
	��ֵ�����	*/


	/*if���

	//����ܼ۴���5000�ʹ�7�ۣ�����9��
	double price1, price2, price3, total, zhekou;
	price1 = 229.0;
	price2 = 10240.55;
	price3 = 2345.3;
	total = price1 + price2 + price3;
	//��������������Ʒ��һ����Ʒ���۴���1000��
	//������Ʒ�ܽ�����5000���ۿ���Ϊ30%������û���ۿ�
	if (price1 > 1000 || price2 > 1000 || price3 > 1000 || total > 5000)
	{
		zhekou = 0.3;
	}
	else 
	{
		zhekou = 1;
	}
	total *= zhekou;
	printf("�ܼ�����Ӧ���Ľ��Ϊ��%.2lf\n", total);
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
	printf("�ܼ�����Ӧ���Ľ��Ϊ��%.2lf\n", total);
	return 0;	*/

	//ɱ����switch�ṹ���÷�
	//һ�㴦��������ĳ����������
	//��֪��ĳ�����ж�����
	//�߼����û������·ݣ������·��жϵ��µ�����
	int month;
	printf("�������·ݣ������ж�������");
	scanf_s ("%d",&month);
	switch (month)
	{
	case 1:
		printf("%d����31�졣\n", month);
		printf("1�¹�������ꡣ\n");
		break;
	case 2:
		//������ж����Ƿ�������
		printf("%d����28�졣\n", month);
		break;
	case 3:
		printf("%d����31�졣\n", month);
		break;
	case 4:
		printf("%d����30�졣\n",month);
		break;
	dufult:
		printf("��ǰ������ʱ�����ж�1-4�µ�������\n");
	}
	return 0;
	

}