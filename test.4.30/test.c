#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������
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
//	printf("������������:>\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	/*int x = 0;
//	int y = 0;*/
//	//int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//����ָ������
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//
//		/*if (input >= 1 && input <= 5)
//		{
//			printf("������������:>\n");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("����\n");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("����\n");
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
//	int(*pfArr[4])(int, int);//����ָ������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ָ����ָ�������ָ��
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
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

//qsort - ���������������͵�����
int main()
{
	//ð��������
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}