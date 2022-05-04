
#include<stdio.h>

//练习
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16  a[0]计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]是首元素地址 
//	printf("%d\n", sizeof(*(a[0] + 1)));//4   第1行第2个元素
//	printf("%d\n", sizeof(a + 1));//4/8   第2行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16  a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16  第一行
//	printf("%d\n", sizeof(a[3]));//16  
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;
//  p = 0x10 00 00
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//00 10 00 14
	printf("%p\n", (unsigned long)p + 0x1);//00 10 00 01
	printf("%p\n", (unsigned int*)p + 0x1);//00 10 00 04
	return 0;
}