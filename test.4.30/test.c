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


//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};

#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值的
//	return *(int*)e1 - *(int*)e2;
//}

//void test1()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}

//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}

#include<string.h>
//int com_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//int com_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较,应该用strcmp函数
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"张三",20},{"李四",25},{"王五",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_stu_by_age);
//}
//qsort - 可以排序任意类型的数据

void test4()
{

}
int main()
{
	//冒泡排序函数
	
	
	//test1();
	//test2();
	//test3();
	test4();
	//BubbleSort(arr, sz);
	
	return 0;
}

