
#include<stdio.h>

//��ϰ
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16  a[0]������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]����Ԫ�ص�ַ 
//	printf("%d\n", sizeof(*(a[0] + 1)));//4   ��1�е�2��Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8   ��2�еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16  a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16  ��һ��
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
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//00 10 00 14
	printf("%p\n", (unsigned long)p + 0x1);//00 10 00 01
	printf("%p\n", (unsigned int*)p + 0x1);//00 10 00 04
	return 0;
}