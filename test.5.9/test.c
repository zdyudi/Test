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
	//�����Ͳ���
	int ret = FindNum(arr, k, &x, &y);
	if(ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±���: %d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}