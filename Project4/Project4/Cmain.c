#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Info()
//{
//	printf("aaa\n");
//
//}
//int gugu(int x)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		printf("%d * %d = %d\n", x, i, x * i);
//	}
//}
//
//int add(int a, int b)
//{
//	printf("���� ��� ��� : ");
//	printf("%d + Td = %d\n", a, b, a + b);
//}
//
//int sub(int a, float b, char c)
//{
//	printf(" �Է��� ������ %d\n", a);
//	printf(" �Է��� �Ǽ��� %.2f\n", b);
//	printf(" �Է��� ���ڴ� %c\n", c);
//}
//
//int mul(int x, int y)
//{
//	int z = x * y;
//
//	return z;
//}


//int old(int x)
//{
//	printf("�Էµ� ���� : %d\n", x);
//
//	if (x < 0)
//	{
//		printf("���̸� �߸� �Է��߽��ϴ�.\n");
//		return 0;
//
//	}
//	
//		x += 10;
//		printf("+ 10�� : %d", x);
//		printf("\n");
//	
//}
//
//int trs(float x)
//{
//	printf("cm�Էµ� �� : %.1fcm\n", x);
//	float y = x/100;
//	printf("m�� ȯ��� ��: %.1fm", y);
//	printf("\n");
//}
//
//int year(int x)
//{	printf("�Էµ� ���� : %d ��\n", x);
//	x = 19 - x;
//	printf("������ �� ������ ���� ���� : %d�� \n", x);
//	printf("\n");
//}
//
//int arr(int x, float y, float w)
//{
//	printf("������ : %.1f\nŰ : %.1f\n���� : %d\n", w, y, x);
//
//}
//
//int sum(int x, int y)
//{
//	return x + y;
//}
//
//int sum_show()
//{
//	int rel = sum(5, 4);
//	printf("���� ��� : %d", rel);
//
//}
//------------------------------------------------

//int mul(int x, int y, int z)
//{
//	return x * y * z;
//}
//
//int mul_show()
//{
//	printf("-------------------------------------------------\n");
//	printf("1�� �����Դϴ�.\n");
//	int x, y, z;
//	printf("����� ���� 3�� �Է��ϼ���. \n");
//	scanf(" %d %d %d", &x, &y, &z);
//	int result = mul(x, y, z);
//	printf("%d*%d*%d = %d", x, y, z,result);
//	printf("\n");
//}
//
//int Test(int x)
//{
//	if (x < 0 || x>100)
//	{
//		printf("�߸��� ���� �Է��߽��ϴ�. �Է¹����� 0~100�Դϴ�.");
//	}
//	else if (x >= 90)
//	{
//		return 'A';
//	}
//	else if (x >= 80)
//	{
//		return 'B';
//	}
//	else if (x >= 70)
//	{
//		return 'C';
//	}
//	else if (x >= 60)
//	{
//		return 'D';
//	}
//	else 
//	{
//		return 'F';
//	}
//}
//
//int Test_show()
//{
//	printf("-------------------------------------------------\n");
//	printf("2�� �����Դϴ�.\n");
//	int x;
//	printf("���������� �Է��ϼ���. �Է¹����� 0~100�Դϴ�. : ");
//	scanf(" %d", &x);
//	char r = Test(x);
//	printf("%d ���� %c �����Դϴ�. \n",x, r);
//
//	printf("\n");
//}
//
//float cul(float a, char c, float b)
//{
//	if (c == '+')
//	{
//		return a + b;
//	}
//	else if (c == '-')
//	{
//		return a - b;
//	}
//	else if (c == '*')
//	{
//		return a * b;
//	}
//	else if (b == 0)
//	{
//		return -999;
//	}
//	else if (c == '/')
//	{
//		return a / b;
//	}
//	else if (c == '%')
//	{
//		return (int)a % (int)b;
//	}
//	else
//	{
//		return -999;
//	}
//
//}
//
//float cul_show()
//{
//	printf("-------------------------------------------------\n");
//	printf("3�� �����Դϴ�.\n");
//	float a, b;
//	char c;
//	printf("����� ���� ��������ڸ� �Է��ϼ���. ex) a + b ");
//	scanf(" %f %c %f", &a, &c, &b);
//	float result = cul(a, c, b);
//	if (result == -999)
//	{
//		printf("���ڳ� �������� �Է��� �߸��Ǿ����ϴ�.");
//	}
//	else {
//		printf("%.1f %c %.1f = %.1f", a, c, b, result);
//		printf("\n");
//	}
//}
//
//void _copy(int x, int y)
//{
//	x = y;
//	printf(" �Լ� : %d, %d \n", x, y);
//
//}

int cul_plus(int a, int b)
{
	return a + b;
}
int cul_minus(int a, int b)
{
	return a - b;
}
int cul_multy(int a, int b)
{
	return a * b;
}
int cul_div(int a, int b)
{
	if (b == 0) {
		return -9999;
	}
	else {
		return a / b;
	}
}
int cul_per(int a, int b)
{
	return a % b;
}

int cul_main(int a, char c, int b)
{
	if (c == '+')
	{
		return cul_plus(a, b);
	}
	else if(c == '-')
	{
		return cul_minus(a, b);
	}
	else if (c == '*')
	{
		return cul_multy(a, b);
	}
	else if (c == '/')
	{
		return cul_div(a,b);
	}
	else if (c == '%')
	{
		return cul_per(a, b);
	}
	else
	{
		return -8888;
	}
}
int cul_show()
{
	int x, y;
	char c;
	printf("�Է��Ͻ� ������ �Է��ϼ���\n");
	scanf("%d %c %d", &x, &c, &y);
	int r = cul_main(x, c, y);
	if (r == -9999)
	{
		printf("0���� ���� �� �����ϴ�.\n");
		system("pause");
	}
	else if (r == -8888)
	{
		printf("��������ڸ� �߸� �Է��Ͽ����ϴ�.\n");
		system("pause");
	}	
	else {
		printf("%d %c %d = %d �Դϴ�.\n", x, c, y, r);
	}
}
//----------------------------------------------------------

//void stard(int i)
//{
//	for (int j = 0; j < i; j++)
//	{
//		for (int k = 0; k <= j; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
////--------------------------------------------------------
//void grade(float a, float b, float c)
//{
//	float avg = (a + b + c) / 3;
//	int k = avg;
//}
////-----------------------------------
//
//void WontoDollar(float won)
//{
//	float dollar = won / 1150.50;
//	printf("%f���� %f�޷��Դϴ�. \n", won, dollar);
//}
//
//void tempe(float a)
//{
//	float F = a * 1.8 + 32;
//	printf("���� %.1f�� ȭ���� %.1f �Դϴ�. \n", a, F);
//}
//
//void recy()
//{
//	printf("������");
//	recy();
//}
//
////���丮�� ����Լ� 
//int facto(int i)
//{
//	if (i == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (i*facto(i - 1));
//	}
//}
//-----------------------------------------------------

void makeFunc(int x);//�Լ��� ����, �̷� �Լ��� �ִٰ� ���� ��. 








int main()
{

	//int i = facto(4);
	//printf("%d!�� %d �Դϴ�. \n", 10, i);

	makeFunc(5);//���߿� ���ǵ� �Լ��� ���� ����. ��ư ������ ���� �Ǹ� ȣ���ϴµ� �ƹ� ������ ����.



	while (1) {
		cul_show();
	}
		

//	mul_show();
//	Test_show();
//	cul_show();
//
//	int x = 10, y = 20;
//	_copy(x, y);
//	printf("�ٱ� : x = %d, y = %d \n", x, y);


	//int i = 0;
	//while (i < 4)
	//{
	//	i++;
	//	printf("%d\n", i);
	//	int j = 0;
	//	j++;
	//	printf("j : %d\n", j);
	//}

	//int i=0;
	//for (i = 1; i < 10; i++)
	//{
	//	printf("%d\n", i);
	//}
	//printf("\n%d", i);
	//-----------------------------------------------
	//float x = 25;
	//gugu(x/10);
	//
	//sub(2, 3.14, 'K');
	//
	//mul(10, 5);
	//------------------------------

	//int a = 10;
	//int b = 132;
	//int c = 15;
	//int x;
	//float y;
	//float z;
	//old(a);
	//trs(b);
	//year(c);
	//printf("���� Ű �����Ը� ������� �Է��ϼ���.");
	//scanf(" %d %f %f", &x, &y, &z);
	//arr(x,y,z);

	//sum_show();
	//---------------------------------------------------



}


void makeFunc(int x)//�Լ��� ����, ����� �Լ��� �����ڵ带 ������ ��ġ�� ���� �ۼ��ϴ� ��.
{
	printf("���߿� ���ǵ� �Լ���.%d \n", x);
}