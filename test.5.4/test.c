
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

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
 /* p = 0x10 00 00
��֪���ṹ��Test���͵ı�����С��20���ֽ�*/
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//00 10 00 14
//	printf("%p\n", (unsigned long)p + 0x1);//00 10 00 01
//	printf("%p\n", (unsigned int*)p + 0x1);//00 10 00 04
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//1,3,5,0,0,0   ���ű��ʽ
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//0xff ff ff fc   -4
//	return 0;
//}

//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)(*(a + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//"at"
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);//"POINT"
	printf("%s\n", *-- * ++cpp + 3);// ER
	printf("%s\n", *cpp[-2] + 3);// ST
	printf("%s\n", cpp[-1][-1] + 1);// EW
	return 0;
}