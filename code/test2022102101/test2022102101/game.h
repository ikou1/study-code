#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWs ROW+2
#define COLs COL+2
#define number 10
#include<stdlib.h>
#include<time.h>
void Initboard(char board[ROWs][COLs], int rows, int cols, char set);
void Displayboard(char board[ROWs][COLs], int row, int col);
void SetMine(char board[ROWs][COLs], int row, int col);
void FindMine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col);
