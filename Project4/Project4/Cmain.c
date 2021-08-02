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


int old(int x)
{
	printf("입력된 나이 : %d\n", x);
	x += 10;
	printf("+ 10살 : %d", x);
	printf("\n");
}

int trs(float x)
{
	printf("cm입력된 값 : %.1fcm\n", x);
	float y = x/100;
	printf("m로 환산된 값: %.1fm", y);
	printf("\n");
}

int year(int x)
{	printf("입력된 나이 : %d 세\n", x);
	x = 19 - x;
	printf("성인이 될 때까지 남은 나이 : %d세 \n", x);
	printf("\n");
}

int arr(int x, float y, float w)
{
	printf("몸무게 : %.1f\n키 : %.1f\n나이 : %d\n", w, y, x);

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
	printf("나이 키 몸무게를 순서대로 입력하세요.");
	scanf(" %d %f %f", &x, &y, &z);
	arr(x,y,z);

}