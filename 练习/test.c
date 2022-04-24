#define _CRT_SECURE_NO_WARNINGS 1	

#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
//int main()
//{
//	printf("你好\n");
	//return 0;
//}
//int main()
//{
	//char ch =  'B';
    //printf("%c\n",ch);
	//int age = 40;
	//long num = 100;
	//printf("%d\n", num);
	//printf("%d\n",age);
	//float f = 3.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);
	//return  0;+
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
	//输入函数
//	scanf("%d%d", &num1, &num2);//取地址符号
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

#include<limits.h>
//1.写代码交换两个整数的值,不能使用第3个变量
//int main()
//{
//	int x = 3;
//	int y = 5;
//	//INT_MAX;最大值
//	//int sum = 0;
//	printf("%d %d\n", x, y);
//	x = x ^ y;//^按（二进制）位异或   相同为0，相异为1
//	y = x ^ y;
//	x = x ^ y;
//	////溢出的问题
//	//x = x + y;//x是和   y->y
//	//y = x - y;//y->x
//	//x = x - y;//x->y
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//2.找出只出现一次的数
//int main()
//{
//	int arr[] = {1,2,3,4,5,7,1,2,3,4,5};
//	//暴力求解
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次count++;
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//    }
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//3.写一个关机程序
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60   60s后关机
	//shutdown -a   取消关机
	system("shutdown -s -t 60");
again:
	printf("注意，1分钟后关机，输入：大哥，取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "大哥") == 0)//判断
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}