#define _CRT_SECURE_NO_WARNINGS
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

//void GetMemory(char**p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str, "hello");
//	printf(str);
//
//	free(str);
//	str=NULL:
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[0];//柔性数组
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};

//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system(）-执行系统命令
//	system("shutdown -s -t 60");
//	//again:
//	while (1)
//	{
//		printf("请注意，输入:大神,取消\n请输入:>");
//		scanf("%s", input);
//		if (strcmp(input, "大神") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	/*else
//	{
//		goto again;
//	}*/
//	return 0;
//}
//int main()
//{
//	printf("hello\n");
//	goto again;
//	printf("haha\n");
//again:
//	printf("hello\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
#include<errno.h>
#include<string.h>
//int main()
//{
//	//相对路径
//	//fopen("test.txt", "r");
//	//绝对路径
//	//fopen("D:\\C++\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开文件
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("Test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pfRead = fopen("Test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//    fputc(ch,stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("Test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	/*fputc('y', pf);
//	fputc('e', pf);
//	fputc('s', pf);*/
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("Test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	/*fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);*/
//	fputs("hello\n", pf);
//	fputs("hehe\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	char buf[1024] = { 0 };
	//fgets(buf, 1024, stdin);//从标准输入读取
	//fputs(buf, stdout);//输出到标准输出流

	gets(buf);
	puts(buf);
	return 0;
}