#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


//int mak(a, b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d，%d", &a, &b);
//	int c = mak(a,b);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int c = 0;
//	int p = 0;
//	scanf("%d", &p);
//	for (i = 0; i <= p; i++)
//	{
//		for (a = 0; a <= i; a++)
//		{
//			c = c + a;
//		}
//
//	}
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 1;
//	for (i = 1;i<=100; i++)
//	{
//		for (n = 1; n <= i;n++)
//		{
//			printf(" ");
//		}
//		printf("H");
//		Sleep(100);
//		system("cls");
//	}
//	system("pause");
//	return 0;
//}
//以下为错误展示
//int main()
//{
//	int a, b=0, y;
//	int n;
//	for (n = 1; n <= 100; n++)
//	{
//		for (a = 1; a <= 100; a++)
//		{
//			y = 1 + b;
//			b = -1 ^ (n + 1)*(1 / (b + 1));
//			b++;
//		}
//	}
//	printf("y=%d", y);
//	return 0;
//}
//int main()
//{
//	int n, sum = 0;
//	for (n = 1; n <= 100000;n++)
//	{
//		sum = (1 / (n*(-1) ^ (n - 1))) + sum;
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n, b, sum=0, h=0;
//	int m = 0;
//	for (n = 0; n <= 10000; n++)
//	{
//		for (b = 0; b != n; b++)
//		{
//			h = (1 / (1 + m))*(-1);
//			m++;
//		}
//		sum = h + sum;
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//终止错误展示
//int main()
//{
//	float under = 1;
//	float n = 0;
//	float sum = 0;
//	float f = -1;
//	for (n = 0; n <= 99999; n++)
//	{
//		f = f*(-1);
//		sum = 1 / under*f + sum;
//		under++;
//	}
//	printf("sum=%f\n", sum);
//	system("pause");
//	return 0;
////}
//#include <stdio.h>
//
// int count = 1;
// // 因为传送过来的是字符串不是字符，所以形式参数要用char*而不是用char
// void hannuota(int n, char* a, char* b, char* c) {  // 盘子数，盘子原来所在柱子，借助的柱子，目的地所在柱子
//	     if (n == 1) {
//		         printf("%d: %s -> %s \n", count, a, c);  // 当n==1的时候，直接从柱子1移动到柱子3
//		         count++;
//		
//	}
//	     else {
//		         hannuota(n - 1, a, c, b);      // 第一步需要把 n-1 个盘子从 柱子1 借助 柱子3 移动到 柱子2
//		         printf("%d: %s -> %s \n", count, a, c); // 第二步把 柱子1 剩下的最大的那个从 柱子1 移动到 柱子3
//		         count++;
//		         hannuota(n - 1, b, a, c);      // 第三步把 柱子2 中的 n-1 个盘子从 柱子2 借助 柱子1 移动到 柱子3
//		
//	}
//	
//}
//
// int main() {
//	     int n = 0;
//	     printf("请输入汉诺塔的盘子数：");
//	     scanf("%d", &n);
//	     hannuota(n, "柱子1", "柱子2", "柱子3");
//	     return 0;
////	
////}
//int main()
//{
//	printf("a=%d", 10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int x;
//	int *p=&x;
//	scanf("%d", p);
//	printf("%d", x);
////	system("pause");
////	return 0;
////}
//int main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	printf("%d,%d", a, b);
//	system("pause");
//	return 0;
//}
//一定要声明函数才可以使用
//void _Print1(void);
//int main(void)
//{
//	_Print1();
//	system("pause");
//	return 0;
//}
//
////定义一个打印函数
//void _Print1(void)
//{
//	printf(".........\n");
//	printf("+++++++++\n");
//	return;
////}
//void _printint(int a);
//int main()
//{
//	int insert = 0;
//	printf("输入想要打印到的数值>");
//	scanf("%d", &insert);
//	_printint(insert);
//	system("pause");
//	return 0;
//}
//void _printint(int a)
//{
//	int i = 0;
//	for (i = 0; i <= a; i++)
//	{
//		if (i == 0)
//		{
//			Sleep(1000);
//			printf("%d\n", i);
//			
//		}
//		else
//		{
//			Sleep(1000);
//			printf("%d\n", i);
//		}
//	}
//	return;
//}
//一下为未知错误代码
/*void function_1(int b, int c[]);
int main(int argc, char **argv)
{
	int a_score[6] = { 0 };
	int i = 1;
	int number = 0;
	scanf("%d", &number);
	function_1(number,a_score[6]);
	for (i = 1; i <= number; i++) {
		printf("%d", a_score[i]);
	}
	return 0;
}
void function_1(int b,int c[])
{
	int i = 1;
	for (i = 1; i <= b; i++) {
		c[i - 1] = i;
	}
}
//*/
//#include "stdio.h"
//#include "stdlib.h"
//void function_1(int b, int c[]);
//int main(void)
//{
//	/*int _9gongge[3][3] = { { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } };*/
//	int a [2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int i = 0;
//	int j = 0;
//	int l = 0;
//	int gamemode = 0;
//	/*for (h = 1; h <= 2; h++)
//	{
//		for (l = 1; l <= 4; l++)
//		{
//			printf("%d\n", app[h][l]);
//		}
//	}*/
//	//printf("%d", app[1][2]);
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
//		}
//	}
//	/*printf("游戏加载中请稍后");
//	system("cls");
//	printf("请选择下列选项：\n1 开始游戏\n2 退出游戏\n->");
//	scanf("%d", &gamemode);
//	system("cls");
//	if (gamemode == 1) {
//	for(h = 1; h <= 3; h++)
//	{for (l = 1; l <= 3; l++) {
//	printf("%d",_9gongge[h][l]);
//	}
//	}
//	}
//	else ;
//	*/
//	system("pause");
//	return 0;
//}