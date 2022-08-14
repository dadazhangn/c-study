#define ROW 3
#define COL 3



#include <time.h>
#include <stdlib.h>

//函数声明
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


char IsWin(char board[ROW][COL], int row, int col);//四种状态：玩家赢*，电脑赢#，平局Q，都没赢继续C
int isFul(char board[ROW][COL], int row, int col);