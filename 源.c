#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

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
////}
//void helloworld(void);
//int main(void)
//{
//	helloworld();
//	helloworld();
//	helloworld();
//	system("pause");
//	return 0;
//}
//void helloworld(void)
//{
//	static int b = 0;
//	int a = 0;
//	b++;
//	a++;
//	printf("\t%d\n", b);
//	printf("\t%d\n", a);
//	printf("\thello world\n");
//}
//extern int y;
//int main()
//{
//	int a = 15;
//	int b = 23;
//	Add1(a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n",a);
//	printf("%p",&a);
//	system("pause");
//	return 0;
//}
//#define A 1
//int main()
//{
//	int tickets_A[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
//	char input = 0;
//	int number_1 = 0;
//	int i = 0;
//	int s = 0;
//	int flag = 0;
//	int choice = 0;
//start:
//	printf("请输入你想要选择的服务>\n1.退出\n2.购票\n>:");
//	scanf("%c", &choice);
//	if (choice == 1)
//		goto loop;
//	printf("请输入您的目的地>:");
//	getchar();
//	scanf("%d\n", &input);
//	Sleep(1000);
//	if (strcmp (input,"A") == 1)
//	{
//		system("cls");
//		printf("请输入你想购买的张数>:");
//		getchar();
//		Sleep(1000);
//		scanf("%d",&number_1);
//		if (number_1 > 15)
//		{
//			printf("车票不足\n");
//			system("pause");
//			goto loop;
//		}
//		else
//		{
//			for (int i = 0; i <= number_1; i++)
//			{
//				tickets_A[15 - i] = 0;
//			}
//			system("cls");
//			printf("请付款%d\n",58*number_1);
//			system("pause");
//		}
//	}
//	for (s = 0; s <= 15; s++)
//	{
//		if (tickets_A[s] = 1)
//		{
//			flag++;
//		}
//	}
//	printf("还剩%d张票\n", flag);
//	loop:
//		return 0;
//}
///*int* p;
//	int a = 0;
//	p = &a;
//	*p = 1;
//	printf("%d",a);
//	system("pause");
//	return 0;*/
//	/*int a[5] = {0,0,0,0,0};
//	int *p;
//	p = a ;
//	*p = 10;
//	printf("%d\n",a);
//	printf("%d\n",p);
//	printf("%d",a[0]);
//	system("pause");*/
//	/*int a[3] = {1,4,5};
//	int *p;
//	p = &a[0];
//	printf("%d,%d,%d",1,2,3);
//	system("pause");*/
//	//int arr[3][3]={0,6,14,21,89,20,11,26,33};
//	//int *p;
//	//p=arr;
//	//printf("值为：%d\n",arr[0][1]);
//	//printf("值为：%d\n",*(arr[0]+1));
//	//printf("值为：%d\n",*(*(arr+0)+1));
//	//printf("值为：%d\n",*(*(arr+1)+1));
//	//printf("值为：%d\n",(*(arr+0))[1]);
//	//printf("值为：%d\n",*(arr+0)[1]);
//	//printf("值为：%d\n",*arr);
//	//printf("值为：%d\n",**(arr+1));
//	//printf("值为：%d\n",**arr);
//struct student
//{
//	char id;
//	int score;
//	char sexual;
//};
//int main(void)
//{
//	char str[] = "wo diao ni ma de";
//	printf("%d\n",strlen(str));
//	printf("%d\n",sizeof(str));
//	printf("%s\n",str);
//	printf("%d\n",str);
//	printf("%s\n",&str[0]);
//	system("pause");
//	int a = 19;
//	printf("%d\n",a);
//	printf("%d\n",&a);
//	system("pause");
//	char arr[] = "1,3,4,6,9,8";
//	char arr1[] = {'A','B','C','\0'};
//	char *p;
//	char *p1;
//	p1 = "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0";
//	p = arr;
//	//*arr = '2';
//	*p = '2';
//	//arr[2] = '2';
//	printf("%s\n",p1);
//	printf("%d\n",sizeof(p1));
//	printf("%p\n",strlen(p1));
//	printf("%p\n",p1+1);
//	system("pause");
//	return 0;
//}

//int Count_char (char *a,int *count)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0;a[i] != '\0'; i++)
//	{
//		if (a[i] != ' ')
//			*count++;
//	}
//	return *count;
//}
//void Sleep_report (char *a ,int num)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int p = 0;
//	char a[9] = "0";
//	scanf("%s",a);
//	Sleep_report(a,p);
//	for(i = 0;a[i] != '\0'; i++)
//	{
//		if (a[i] != ' ')
//			count++;
//	}
//	printf("%d",count);
//	system("pause");
//	return 0;
//}
//void Sleep_report (char a ,int num)
//{
//	int flag = 0;
//	for (flag = 0;flag <=num ;flag ++)
//	{
//		printf("%c",*(a+flag));
//		Sleep(300);
//	}
//}
//void _output(char *HZ)
//{
//	int i = 0;
//	int flag = strlen(HZ);
//	for(i = 0;i <= flag;i++ )
//	{
//		printf("%c",HZ[i]);
//		Sleep(200);
//	}
//}
//int main()
//{
//	char Hanzi[1024] = {0};
//	scanf("%s",Hanzi);
//	_output(Hanzi);
//	printf("%d",strlen(Hanzi));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[2048] = "hello world";
//	char arr2[2048] = "fuck you world";
//	int a = 0;
//	a = sizeof(arr1);
//	printf("%d",a);
//	/*strcpy(arr1,arr2);
//	printf("arr1 = %s\n",arr1);
//	printf("arr2 = %s\n",arr2);*/
//	system("pause");
//	return 0;
//}
//int main()
//{
//	FILE *p;
//	int i;
//	char reading = {'0'};
//	p = fopen("C:\\Users\\User\\Documents\\01001.txt","r+");
//	for(i = 0;; i++)
//	{
//		reading = feof(p);
//		printf("%c",reading);
//	}
//	if(p == NULL)
//		printf("Open Failurr");
//	fclose(p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char password1[11] = "1121135611";
//	char password[11];
//	int i = 0;
//	printf("请输入十位密码：");
//	scanf("%s",password);
//	i = strcmp(password,password1);
//	if(strcmp(password,password1) != 0)
//	{
//		printf("failed");
//	}
//	printf("%d\n",i);
//	system("pause");
//	return 0;
//}