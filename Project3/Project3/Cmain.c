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

	//int a;
	//do
	//{	
	//
	//	scanf(" %d", &a);
	//
	//
	//	switch (a)
	//	{
	//	case 1:
	//		printf("1");
	//		break;
	//	case 2:
	//		printf("2");
	//	case 3:
	//		printf("3");
	//		break;
	//	default:
	// 	   
	//		break;
	//	}
	//} while (a != 9);
	//int a = 0; 
	//
	//while (3)
	//{
	//	printf("메롱메롱메롱이다롱\n");
	//	scanf(" %d", &a);
	//	printf(" %d", a);
	//}
	//int a =0; 
	//
	//while (a <10)
	//{
	//	printf("메롱\n");
	//	a++;
	//}
	//
	//int b = 0;
	//printf("몇 번 반복해? : \n");
	//scanf(" %d", &a);
	//while (b < a)
	//{
	//	printf("메로나\n");
	//	
	//		b++;
	//}
	//-------------------------------------------
	//int a ;
	//int b = 0;
	//int c = 0;
	//printf("몇 줄 만들어? : \n");
	//scanf(" %d", &a);
	//while (b < a)//b가 a가 될때까지 *을 반복한다. 
	//{
	//	c = 0;//별그릴 위치 초기화 
	//	while (c < a) {
	//		c++;//별 반복하기 
	//		printf("* ");//별그리기
	//	}
	//	printf("\n");//줄바꾸기
	//	b++;//줄내리기
	//}

	//----------------------------------------
	//int i=0;
	//while (i++ < 10)// i는 0부터 시작
	//{
	//	printf("%d", i);
	//}
	//printf("\n%d", i);
	//printf("\n\n");
	//i = 0;
	//while (++i < 10)// i는 1부터 시작
	//{
	//	printf("%d", i);
	//}
	//printf("\n%d", i);
	//-------------------------------------
	
	//int a;
	//int i=0;
	//scanf(" %d", &a);
	//while (i < a)
	//{
	//	i = 0;
	//	
	//	while (i < a)
	//	{
	//		printf("*");
	//		i++;
	//	}
	//	printf("\n");
	//	i++;
	//}
	//----------------------------------------
	
		
	printf("1번 문제 : ");
	printf("\n1~100까지의 숫자 중에서 짝수만 출력합니당. \n");
	int a = 0; //횟수 기록용
	
	while (a++ < 100)
	{
		if (a % 2 == 0)
		{
			printf("%d\n", a);
		}
		
	}
	printf("\n------------------------------");
	//----------------------------------
	printf("\n2번 문제 : ");

	printf("\n1~100까지 숫자 중에서 5의 배수만출력합니당. \n");
	a = 0;
	while (a++ < 100)
	{
		if (a % 5 == 0)
		{
			printf("%d\n", a);
		}
	}
	printf("\n------------------------------");
	//----------------------------------
	printf("\n3번 문제 : ");

	printf("\n1~100까지 숫자 중에서 홀수만 출력, 단 순서를 반대로 100~1까지 \n");

	a = 100;
	while (a-- > 0 )
	{
		if (a % 2 != 0)
		{
			printf("%d\n", a);			
		}
	}
	printf("\n------------------------------");
	//----------------------------------
	printf("\n4번 문제 : ");

	printf("\n1~100까지 숫자 중에서 1의 자리 숫자가 7인 숫자만 출력, 단 순서를 반대로 \n");

	a = 100; 
	while (a-- >0)
	{
		if (a % 10 == 7)
		{
			printf(" %d\n", a);
		}

	}
	printf("\n------------------------------");
	//----------------------------------
	printf("\n5번 문제 : ");

	printf("\n1~100까지 숫자를 한줄로 출력 단, 10개마다 줄을 바꾸기 \n");

	a = 0;
	while (a++ < 100)
	{
		printf("%d ", a);
		if (a % 10 == 0)
		{
			printf("\n");
		}
	}



}