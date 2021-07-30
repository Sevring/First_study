#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	//int a = 10; 
	//int b = 20;
	//int c;
	//
	//int max;
	//int min;
	//
	//if (a > b)
	//{
	//	max = a;
	//	min = b;
	//}
	//else
	//{
	//	max = b;
	//	min = a;
	//}
	//printf("정수를 입력하세욥 : ");
	//scanf(" %d", &c);
	//
	//if (max < c)
	//{
	//	max = c;
	//}
	//else if (min > c)
	//{
	//	min = c;
	//}

	int a;
	do
	{	

		scanf(" %d", &a);


		switch (a)
		{
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
		case 3:
			printf("3");
			break;
		default:
			break;
		}
	} while (a != 9);





}