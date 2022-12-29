#include <time.h>
#include <iostream>
#include <stdlib.h>


using namespace std;

char const SPACE = ' ';
char const X = 'X';
int const GAME_SIZE = 16;
const long BIG_NUM = numeric_limits<streamsize>::max();
const char END_LINE = '\n';

struct t_move
{
	int row;
	int col;
};

char *createGame();
void displayGame(char *board);
t_move getMove();
void displayBoard(char *board, t_move move);
bool checkWin(char *board);
void updateBoard(t_move move, t_move move2, char *board);