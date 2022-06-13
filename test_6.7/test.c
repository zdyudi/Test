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

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}