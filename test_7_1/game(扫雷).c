#define _CRT_SECURE_NO_WARNINGS

#include "game(扫雷).h"


void Initboards(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	//打印列号
	for (int i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		//打印行号
		printf("%d ", i);
		for (int j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count) {
		int x = rand()%row+1;//1-9
		int y = rand()%col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
	

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win< row * col - EASY_COUNT) {
		int x = 0;
		int y = 0;
		printf("请输入排查坐标>:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//是雷
			if (mine[x][y] == '1') {
				printf("很遗憾，你输了\n");
				DispalyBoard(mine, row, col);
				break;
			}
			//非雷
			else
			{
				//计算x,y周围有几颗雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DispalyBoard(show, row, col);
				win++;
			}
		}
		else
			printf("输入非法，重新输入\n");
	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜，排雷成功\n");
		DispalyBoard(mine, row, col);
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';

}


