//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define ROW 3
//#define COL 3
//
////��ʼ������
//void IntitBoard(char board[ROW][COL], int row, int col);
//
////��ӡ����
//void DisplayBoard(char board[ROW][COL], int  row, int  col);
//
////�������
//void player_move(char board[ROW][COL], int  row, int  col);
//
////��������
//void computer_move(char board[ROW][COL], int  row, int  col);
//
////�ж���Ӯ
//char is_win(char board[ROW][COL], int  row, int  col);
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//��
#define COL 3//��
//����
void IntitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComeputerMove(char board[ROW][COL], int row, int col);

//����������Ϸ������״̬
//'*'  '#'  'Q'  'C'
char IsWin(char board[ROW][COL], int row, int col);