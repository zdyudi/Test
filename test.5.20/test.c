
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
union Un
{
	char c;
	int i;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//4
	return 0;
}