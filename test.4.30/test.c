#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//计算器
//void menu()
//{
//	printf("******************************\n");
//	printf("*****  1.Add    2.Sub  *******\n");
//	printf("*****  3.Mul    4.Div  *******\n");
//	printf("*****  5.Xor    0.exit  ******\n");
//	printf("******************************\n");
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}

//void Cala(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	/*int x = 0;
//	int y = 0;*/
//	//int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//函数指针数组
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//
//		/*if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个数:>\n");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("错误\n");
//		}*/
//
//		switch (input)
//		{
//		case 1:
//			Cala(Add);
//			break;
//		case 2:
//			Cala(Sub);
//			break;
//		case 3:
//			Cala(Mul);
//			break;
//		case 4:
//			Cala(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("错误\n");
//			break;
//		}
//
//	} while(input);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int(*pfArr[4])(int, int);//函数指针数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("abc");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}


void BubbleSort(int arr[], int sz)

//qsort - 可以排序任意类型的数据
int main()
{
	//冒泡排序函数
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}