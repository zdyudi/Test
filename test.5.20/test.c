
#include<stdio.h>

//枚举类型
//enum Sex
//{
//	//枚举的可能取值
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

//联合 - 联合体 - 共用体
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