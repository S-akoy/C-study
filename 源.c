#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>


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