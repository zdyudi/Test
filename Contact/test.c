#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"
//1.���1000�����ѵ���Ϣ
//���� �绰 �Ա� סַ ����
//2.���Ӻ�����Ϣ
//3.ɾ��ָ�����ֵĺ�����Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ

void menu()
{
	printf("*******************************************\n");
	printf("********1.add        2.del    *************\n");
	printf("********3.search     4.modify *************\n");
	printf("********5.show       6.sort   *************\n");
	printf("********0.exit                *************\n");
	printf("*******************************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼ ������ ���1000���˵���Ϣ ��sz
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}