
#include<stdio.h>
#include<stdlib.h>

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void GetMemory(char**p,int num)
{
	*p = (char*)malloc(num);
}

void Test()
{
	char* str = NULL;
	GetMemory(&str,100);
	strcpy(str, "hello");
	printf(str);
}

int main()
{
	Test();
	return 0;
}
