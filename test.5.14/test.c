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