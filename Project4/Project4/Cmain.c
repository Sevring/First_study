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


int old(int x)
{
	printf("�Էµ� ���� : %d\n", x);
	x += 10;
	printf("+ 10�� : %d", x);
	printf("\n");
}

int trs(float x)
{
	printf("cm�Էµ� �� : %.1fcm\n", x);
	float y = x/100;
	printf("m�� ȯ��� ��: %.1fm", y);
	printf("\n");
}

int year(int x)
{	printf("�Էµ� ���� : %d ��\n", x);
	x = 19 - x;
	printf("������ �� ������ ���� ���� : %d�� \n", x);
	printf("\n");
}

int arr(int x, float y, float w)
{
	printf("������ : %.1f\nŰ : %.1f\n���� : %d\n", w, y, x);

}





int main()
{
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

	int a = 10;
	int b = 132;
	int c = 15;
	int x;
	float y;
	float z;
	old(a);
	trs(b);
	year(c);
	printf("���� Ű �����Ը� ������� �Է��ϼ���.");
	scanf(" %d %f %f", &x, &y, &z);
	arr(x,y,z);

}