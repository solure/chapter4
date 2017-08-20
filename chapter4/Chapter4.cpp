#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//S1������ֶκ���ֵ
double calculateFun(double x)
{
	return x >= 0 ? 3 * x + 6 : -pow(x, 2.0) + 2 * x - 8;
}

//S2������ʵ����
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

//S3������籨����
double calculateDgCost(unsigned nNumbers)
{
	if (nNumbers < 10)
		nNumbers = 10;

	return 0.75*nNumbers;
}

//��һ��
void S1()
{
	double dInput;
	printf("��һ�⣺\n");
	printf("������Ҫ�����xֵ��");
	while (1 != scanf_s("%lf", &dInput))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("������Ч�����������룺");
	}

	printf("������Ϊ��%.2lf\n", calculateFun(dInput));
}

//�ڶ���
void S2()
{
	double dInput;
	printf("�ڶ��⣺\n");
	printf("�����빺����");
	while (1 != scanf_s("%lf", &dInput))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("������Ч�����������룺");
	}

	printf("ʵ����Ϊ��%.2lf\n", calculateDisbursement(dInput));
}

//������
void S3()
{
	int nInputCase, nInput;
	printf("�����⣺\n");
	printf("������籨���ͺͷ�����������ͨ��������0���Ӽ����������0����");
	while ((2 != scanf_s("%d%d", &nInputCase,&nInput)))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("������Ч�����������룺");
	}

	printf("�������Ϊ��%.2lf\n", nInputCase ? 
		2 * calculateDgCost(nInput + 1) : calculateDgCost(nInput));
}

//������
void S4()
{
	int nInput,nOutput;
	printf("�����⣺\n");
	printf("������༶�ţ�");
	while ((1 != scanf_s("%d", &nInput)))
	{
		char ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("������Ч�����������룺");
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
		printf("�ð಻���ڣ�\n");
		break;
	}

	printf("%d�������Ϊ��%d\n", nInput, nOutput);
}

int main()
{
	S1();
	S2();
	S3();
	S4();

	return 0;
}