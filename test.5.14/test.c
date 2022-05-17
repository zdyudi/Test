#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//struct s
//{
//	char name[20];
//	int age;
//};

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//前-> 后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else 
//	{
//		//后-> 前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct s arr3[] = { {"张三",20},{"李四",30} };
//	struct s arr4[3] = { 0 };*/
//
//	//strcpy(arr2, arr1);//err
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	
//	//my_memcpy(arr + 2, arr, 20);
//	my_memmove(arr, arr+2, 20);//处理内存重叠的情况的
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,1,3 };
//	int ret=memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset - 内存设置
//int main()
//{
//	char arr[10] ="";
//	memset(arr, '#', 10);
//	
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
	//int tmp = 0;
	//printf("before: a=%d b=%d\n",a,b);
	/*tmp = a;
	a = b;
	b = tmp;*/

	//加减法-可能会溢出
	/*a = a + b;
	b = a - b;
	a = a - b;*/

	//异或的方法
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after: a=%d b=%d\n", a, b);
	return 0;
}*/


//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别+年龄

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;//两者不相同,是两个类型
//	return 0;
//}

//结构体的自引用
//typedef struct Node//重命名
//{
//	int date;//4
//	struct Node* next;//4/8
//}Node;

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct s
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct s s = { 'c',100,3.14,"hello bit" };
//	struct s s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};

//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};

//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};

//int main()
//{
	//struct S1 s1 = { 0 };
	//printf("%zd\n",sizeof(s1) );//12
	//struct S2 s2 = { 0 };
	//printf("%zd\n",sizeof(s2) );//8
//	struct S3 s3 = { 0 };
//	printf("%zd\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%zd\n", sizeof(s4));//32
//	return 0;
//}

//设置默认对齐数 4
//#pragma pack(4)
//struct s
//{
//	char c1;//1
//	//7
//	double d;//8
//};
//#pragma pack()
//取消设置的默认对齐数

//int main()
//{
//	struct s s1 = { 0 };
//	printf("%zd", sizeof(s1));
//	return 0;
//}

#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
};

int main()
{
	//offsetof();
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}