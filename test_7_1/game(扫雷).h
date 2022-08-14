#pragma once
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//À×µÄÊýÁ¿
#define EASY_COUNT 80


#include <stdio.h>
#include<time.h>
#include<stdlib.h>


void Initboards(char board[ROWS][COLS], int rows, int cols, char set);
void DispalyBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int row, int col);