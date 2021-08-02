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
//	printf("덧셈 결과 출력 : ");
//	printf("%d + Td = %d\n", a, b, a + b);
//}
//
//int sub(int a, float b, char c)
//{
//	printf(" 입력한 정수는 %d\n", a);
//	printf(" 입력한 실수는 %.2f\n", b);
//	printf(" 입력한 문자는 %c\n", c);
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
//	printf("입력된 나이 : %d\n", x);
//
//	if (x < 0)
//	{
//		printf("나이를 잘못 입력했습니다.\n");
//		return 0;
//
//	}
//	
//		x += 10;
//		printf("+ 10살 : %d", x);
//		printf("\n");
//	
//}
//
//int trs(float x)
//{
//	printf("cm입력된 값 : %.1fcm\n", x);
//	float y = x/100;
//	printf("m로 환산된 값: %.1fm", y);
//	printf("\n");
//}
//
//int year(int x)
//{	printf("입력된 나이 : %d 세\n", x);
//	x = 19 - x;
//	printf("성인이 될 때까지 남은 나이 : %d세 \n", x);
//	printf("\n");
//}
//
//int arr(int x, float y, float w)
//{
//	printf("몸무게 : %.1f\n키 : %.1f\n나이 : %d\n", w, y, x);
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
//	printf("실행 결과 : %d", rel);
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
//	printf("1번 문제입니다.\n");
//	int x, y, z;
//	printf("계산할 값을 3개 입력하세요. \n");
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
//		printf("잘못된 값을 입력했습니다. 입력범위는 0~100입니다.");
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
//	printf("2번 문제입니다.\n");
//	int x;
//	printf("시험점수를 입력하세요. 입력범위는 0~100입니다. : ");
//	scanf(" %d", &x);
//	char r = Test(x);
//	printf("%d 점은 %c 학점입니다. \n",x, r);
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
//	printf("3번 문제입니다.\n");
//	float a, b;
//	char c;
//	printf("계산할 수와 산술연산자를 입력하세요. ex) a + b ");
//	scanf(" %f %c %f", &a, &c, &b);
//	float result = cul(a, c, b);
//	if (result == -999)
//	{
//		printf("숫자나 연산자의 입력이 잘못되었습니다.");
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
//	printf(" 함수 : %d, %d \n", x, y);
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
	printf("입력하실 계산식을 입력하세욥\n");
	scanf("%d %c %d", &x, &c, &y);
	int r = cul_main(x, c, y);
	if (r == -9999)
	{
		printf("0으로 나눌 수 없습니다.\n");
		system("pause");
	}
	else if (r == -8888)
	{
		printf("산술연산자를 잘못 입력하였습니다.\n");
		system("pause");
	}	
	else {
		printf("%d %c %d = %d 입니다.\n", x, c, y, r);
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
//	printf("%f원은 %f달러입니다. \n", won, dollar);
//}
//
//void tempe(float a)
//{
//	float F = a * 1.8 + 32;
//	printf("섭씨 %.1f는 화씨로 %.1f 입니다. \n", a, F);
//}
//
//void recy()
//{
//	printf("재귀재귀");
//	recy();
//}
//
////팩토리얼 재귀함수 
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

void makeFunc(int x);//함수의 선언, 이런 함수가 있다고 선언만 함. 








int main()
{

	//int i = facto(4);
	//printf("%d!은 %d 입니다. \n", 10, i);

	makeFunc(5);//나중에 정의된 함수를 먼저 사용됨. 암튼 선언이 먼저 되면 호출하는데 아무 문제가 읎다.



	while (1) {
		cul_show();
	}
		

//	mul_show();
//	Test_show();
//	cul_show();
//
//	int x = 10, y = 20;
//	_copy(x, y);
//	printf("바깥 : x = %d, y = %d \n", x, y);


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
	//printf("나이 키 몸무게를 순서대로 입력하세요.");
	//scanf(" %d %f %f", &x, &y, &z);
	//arr(x,y,z);

	//sum_show();
	//---------------------------------------------------



}


void makeFunc(int x)//함수의 정의, 선언된 함수의 실행코드를 별도의 위치에 따로 작성하는 것.
{
	printf("나중에 정의된 함수임.%d \n", x);
}