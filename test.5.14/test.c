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
void* my_memove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest == src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else if(dest>src)
	{
		while (num--)
		{
			(* (char*)dest ) + 20 = (*(char*)src) + 20;
			(--(char*) dest) + 20;
			(--(char*)src)+20;
		}
	}
	return ret;
}
int main()
{
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct s arr3[] = { {"张三",20},{"李四",30} };
	struct s arr4[3] = { 0 };*/

	//strcpy(arr2, arr1);//err
	//my_memcpy(arr2, arr1, sizeof(arr1));
	//my_memcpy(arr4, arr3, sizeof(arr3));

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//my_memcpy(arr + 2, arr, 20);
	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况的
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}