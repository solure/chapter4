#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//S1：计算分段函数值
double calculateFun(double x)
{
	return x >= 0 ? 3 * x + 6 : -pow(x, 2.0) + 2 * x - 8;
}

//S2：计算实付款
double calculateDisbursement(double dValue)
{
	if (dValue >= 1000)
		dValue *= 0.8;
	else if (dValue >= 500)
		dValue *= 0.9;
	else if (dValue >= 200)
		dValue *= 0.95;
	else if (dValue >= 100)
		dValue *= 0.97;
	
	return dValue;
}

//S3：计算电报费用
double calculateDgCost(unsigned nNumbers)
{
	if (nNumbers < 10)
		nNumbers = 10;

	return 0.75*nNumbers;
}

//第一题
void S1()
{
	double dInput;
	printf("第一题：\n");
	printf("请输入要计算的x值：");
	while (1 != scanf_s("%lf", &dInput))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("输入无效，请重新输入：");
	}

	printf("输出结果为：%.2lf\n", calculateFun(dInput));
}

//第二题
void S2()
{
	double dInput;
	printf("第二题：\n");
	printf("请输入购物货款：");
	while (1 != scanf_s("%lf", &dInput))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("输入无效，请重新输入：");
	}

	printf("实付款为：%.2lf\n", calculateDisbursement(dInput));
}

//第三题
void S3()
{
	int nInputCase, nInput;
	printf("第三题：\n");
	printf("请输入电报类型和发送字数（普通类型输入0，加急类型输入非0）：");
	while ((2 != scanf_s("%d%d", &nInputCase,&nInput)))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("输入无效，请重新输入：");
	}

	printf("所需费用为：%.2lf\n", nInputCase ? 
		2 * calculateDgCost(nInput + 1) : calculateDgCost(nInput));
}

//第四题
void S4()
{
	int nInput,nOutput;
	printf("第四题：\n");
	printf("请输入班级号：");
	while ((1 != scanf_s("%d", &nInput)))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("输入无效，请重新输入：");
	}

	switch (nInput)
	{
	case 21:
		nOutput = 45;
		break;
	case 22:
		nOutput = 51;
		break;
	case 23:
		nOutput = 48;
		break;
	case 24:
		nOutput = 46;
		break;
	case 25:
		nOutput = 48;
		break;
	case 26:
		nOutput = 52;
		break;
	default:
		nOutput = 0;
		printf("该班不存在！\n");
		break;
	}

	printf("%d班的人数为：%d\n", nInput, nOutput);
}

int main()
{
	S1();
	S2();
	S3();
	S4();

	return 0;
}