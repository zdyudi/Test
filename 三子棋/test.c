#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include"game.h"
//������������Ϸ
#include "game.h"

//void menu()
//{
//	printf("***************************\n");
//	printf("******** 1. play  *********\n");
//	printf("******** 0. exit  *********\n");
//	printf("***************************\n");
//	printf("��ѡ��:>");
//}
//void game()
//{
//	char ret = 0;
//	//������������
//	char board[ROW][COL] = { 0 };
//	//��ʼ������Ϊ�ո�
//	IntitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		//�������
//		player_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�ж���Ӯ
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//��������
//		computer_move(board, ROW, COL);//�������
//		DisplayBoard(board, ROW, COL);
//		//�ж���Ӯ
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("���Ӯ\n");
//	else if (ret == '#')
//		printf("����Ӯ\n");
//	else
//		printf("ƽ��");
//	DisplayBoard(board, ROW, COL);
//}
////
////ʲô�������Ϸ����
////���Ӯ - '*'
////����Ӯ - '#'
////ƽ�� - 'Q'
////���� - 'C'
////
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
void menu()
{
	printf("*****************************\n");
	printf("*****1.play    0.exit  ******\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	IntitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while(1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComeputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��������ѡ\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}