#define _CRT_SECURE_NO_WARNINGS 1	

#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
//int main()
//{
//	printf("���\n");
	//return 0;
//}
//int main()
//{
	//char ch =  'B';
    //printf("%c\n",ch);
	//int age = 40;
	//long num = 100;
	//printf("%d\n", num);
	//printf("%d\n",age);
	//float f = 3.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);
	//return  0;+
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
	//���뺯��
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

#include<limits.h>
//1.д���뽻������������ֵ,����ʹ�õ�3������
//int main()
//{
//	int x = 3;
//	int y = 5;
//	//INT_MAX;���ֵ
//	//int sum = 0;
//	printf("%d %d\n", x, y);
//	x = x ^ y;//^���������ƣ�λ���   ��ͬΪ0������Ϊ1
//	y = x ^ y;
//	x = x ^ y;
//	////���������
//	//x = x + y;//x�Ǻ�   y->y
//	//y = x - y;//y->x
//	//x = x - y;//x->y
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//2.�ҳ�ֻ����һ�ε���
//int main()
//{
//	int arr[] = {1,2,3,4,5,7,1,2,3,4,5};
//	//�������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���count++;
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//    }
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//3.дһ���ػ�����
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60   60s��ػ�
//	//shutdown -a   ȡ���ػ�
//	system("shutdown -s -t 60");
//again:
//	printf("ע�⣬1���Ӻ�ػ������룺��磬ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "���") == 0)//�ж�
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//9.0
//1001.0
//(-1)^0*1.001*2^3
//(-1)^S*  M  *2^E
//S - 0
//M - 1.001
//E - 3

//0.5
//0.1
//(-1)^0* 1.0 *2^-1
//S - 0
//M - 1.0
//E - -1
//E + 127 = 126

//int main()
//{
//	int n = 9;
//	//0 0000000 0 0000000 00000000 00001001
//	//
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);//0.00000
//	//(-1)^0*0.0000000 00000000 00001001*2^-126
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//(-1)^0*1.001*2^3
//	//0 1000001 0 001000 00000000 000000000
//	printf("n��ֵΪ:%d\n", n);//1091567616
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);//9.0
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0* 1.011*2^2
//	//s - 0
//	//M - 1.011
//	//E - 2+127 - 129
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40 b0 00 00 
//
//	return 0;
//}