#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int is_left_move(char*str1,char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	// strcat ׷��
//	// strncat
//	strncat(str1, str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1�ַ������Ӵ�
//	//strstr - ���Ӵ���
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
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x, &y);
//	if(ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���: %d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
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
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//		/**dest = *src;
//		dest++;
//		src++;*/
//	}
//	//*dest = *src;
//	//����Ŀ�Ŀռ����ʼ��ַ
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
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
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
//	//�Ƚ�
//	while (*str1 ==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
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

int main()
{
	char arr1[10] = "abc";
	char arr2[] = "hello";
	//strncpy(arr1, arr2, 4);
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}