#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
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

//���� - ������ - ������
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	//int a = 0x11223344;
//	//�͵�ַ --------------���ߵ�ַ
//	//     11 22 33 44                   ����ֽ���洢ģʽ
//	//     44 33 22 11                   С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
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
//	struct S arr[50];//50��struct S���͵�����
//	//30 - �˷�
//	//60 - ����
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
	//ʹ���Ѿ����ٵ�20���ֽڿռ�
	//���� �����
	//reallocʹ�õ�ע������
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.                   û��                    ��������¿���һ��ռ䣬����ԭ���ݿ����������ͷžɿռ䣬���ص�ַ
	//3.���µı���������
	/*int* p2 = (int*)realloc(p, 40);
	if (p2 != NULL)
	{
		p = p2;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}*/