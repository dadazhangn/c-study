#define _CRT_SECURE_NO_WARNINGS

#include "game(ɨ��).h"


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
	//��ӡ�к�
	for (int i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		//��ӡ�к�
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
		printf("�������Ų�����>:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			if (mine[x][y] == '1') {
				printf("���ź���������\n");
				DispalyBoard(mine, row, col);
				break;
			}
			//����
			else
			{
				//����x,y��Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DispalyBoard(show, row, col);
				win++;
			}
		}
		else
			printf("����Ƿ�����������\n");
	}
	if (win == row * col - EASY_COUNT) {
		printf("��ϲ�����׳ɹ�\n");
		DispalyBoard(mine, row, col);
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';

}


