#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include"game.h"
//测试三子棋游戏
#include "game.h"

//void menu()
//{
//	printf("***************************\n");
//	printf("******** 1. play  *********\n");
//	printf("******** 0. exit  *********\n");
//	printf("***************************\n");
//	printf("请选择:>");
//}
//void game()
//{
//	char ret = 0;
//	//存放下棋的数据
//	char board[ROW][COL] = { 0 };
//	//初始化棋盘为空格
//	IntitBoard(board, ROW, COL);
//	//打印棋盘
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		//玩家下棋
//		player_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断输赢
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑下棋
//		computer_move(board, ROW, COL);//随机下棋
//		DisplayBoard(board, ROW, COL);
//		//判断输赢
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("玩家赢\n");
//	else if (ret == '#')
//		printf("电脑赢\n");
//	else
//		printf("平局");
//	DisplayBoard(board, ROW, COL);
//}
////
////什么情况下游戏结束
////玩家赢 - '*'
////电脑赢 - '#'
////平局 - 'Q'
////继续 - 'C'
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
//			printf("选择错误!\n");
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
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	IntitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while(1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComeputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("错误，请重选\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}