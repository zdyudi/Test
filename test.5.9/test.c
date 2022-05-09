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

int FindNum(int arr[3][3], int k, int*px, int*py)//int row, int col)
{
	int x = 0;
	int y = *py - 1;//col
	while (x<=*px-1 && y>=0)//row
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if(ret == 1)
	{
		printf("找到了\n");
		printf("下标是: %d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}