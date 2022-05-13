#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int is_left_move(char*str1,char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	// strcat 追加
//	// strncat
//	strncat(str1, str1,len1);
//	//2.判断str2指向的字符串是否是str1字符串的子串
//	//strstr - 找子串的
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}

//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int FindNum(int arr[3][3], int k, int*px, int*py)//int row, int col)
//{
//	int x = 0;
//	int y = *py - 1;//col
//	while (x<=*px-1 && y>=0)//row
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if(ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是: %d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	/*int len = my_strlen("abcdef");
//	printf("%d\n", len);*/
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//		/**dest = *src;
//		dest++;
//		src++;*/
//	}
//	//*dest = *src;
//	//返回目的空间的起始地址
//	return ret;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 ==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n",ret);
//
//	/*if (strcmp(p1, p2) > 0)
//	{
//		printf("p1 > p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1 = p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1 < p2\n");
//	}*/
//
//	/*int ret = strcmp(p1, p2);
//	printf("%d\n", ret);*/
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "hello";
//	//strncpy(arr1, arr2, 4);
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2,4);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && ( * s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}

//int main()
//{
//	//strstr - 查找字符串
//	char* p1 = "abcdedefghi";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	/*char arr[] = "www@niuke.com";
//	char* p = "@.";*/
//	//点分十进制的表示方式
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}

#include<errno.h>
//int main()
//{
//	//错误码   错误信息
//	//0         No error   
//	//1         Operation not permitted
//	//2         No such file or directory
//	//..
//
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//
//	//打开文件
//	FILE* pf = fopen("txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success");
//	}
//	return 0;
//}

#include<ctype.h>

int main()
{
	//char ch = '0';
	////int ret = islower(ch);
	//int ret = isdigit(ch);
	//printf("%d\n", ret);

	//char ch = tolower('Q');
	//char ch = toupper('q');
	//putchar(ch);
	char arr[] = "I Am A Sudent";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
		    arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}