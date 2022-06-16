#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14,"yes" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//write
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//close
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//read
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score),s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	//close
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14,"yes" };
//	
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//write
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//	rewind(pf);
//	fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf))!=EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct S
//{
//	int a;//4
//	char b;//1
//	short c;//2
//	short d;//2
//}s;//12
//
//int main()
//{
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//假设 标准偏移量是4
//struct A
//{
//	int a;//4
//	short b;//2
//	int c;//4
//	char d;//1
//};//16
//struct B
//{
//	int a;//4
//	short b;//2
//	char c;//1
//	int d;//4
//};//12
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int Sub(int x,int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Dub(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int arr[5] = { 1,3,2,5,4 };
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] > arr[i + 1]&&i<4)
//		{
//			sum = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = sum;
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<string.h>

//int main()
//{
//	int ret = 0;
//	char arr[100] = { "abcdef" };
//	char arr2[100] = { "qaz" };
//	//strcpy(arr2, arr);//copy
//	ret = strcmp(arr, arr2);
//	strcat(arr, arr2);
//	printf("%s\n", arr);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &i);
//	n = i;
//	printf("%d\n", n);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[10];
//};
//
//int main()
//{
//	struct S s = { "zhangsan",25,"34567","nan"};
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.tele); 
//	printf("%s\n", s.sex);
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	printf("%p\n", pa);
	printf("%d\n", a);
	return 0;
}