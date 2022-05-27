#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//枚举类型
//enum Sex
//{
//	//枚举的可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};

//int main()
//{
//	/*enum Sex s = MALE;
//	enum Color c = BLUE;*/
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//
//	return 0;
//}

//联合 - 联合体 - 共用体
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//int check_sys()
//{
//	/*int a = 1;
//	return *(char*)&a;*/
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}

//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	//int a = 0x11223344;
//	//低地址 --------------》高地址
//	//     11 22 33 44                   大端字节序存储模式
//	//     44 33 22 11                   小段字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//union Un
//{
//	int a;//4
//	char arr[5];//5
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	struct S arr[50];//50个struct S类型的数据
//	//30 - 浪费
//	//60 - 不够
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//当动态申请的空间不再使用
	//就应该还给操作系统
	free(p);
	p = NULL;
	return 0;
}