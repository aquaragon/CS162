#include "Header.h"

char elements[GAME_SIZE/2] = { '!','@','#','$','%','^','&','*' }; 

//creates random board
char *createGame()
{
	int rand_spot;
	char *board = new char[GAME_SIZE];

	for (int i = 0; i < GAME_SIZE; i++)
	{
		*(board + i) = X;
	}
	for (int j = 0; j < 2; j++)
	{
		for (int k = 0; k < 8; k++)
		{
			do
			{
				rand_spot = rand() % GAME_SIZE;
			} while (*(board + rand_spot) != X);
			*(board + rand_spot) = elements[k];
		}
	}

	return board;
}

//displays board without any moves
void displayGame(char *board)
{
	for (int i = 0; i < GAME_SIZE; i++)
	{
		cout << "|";
		if (*(board + i) == SPACE)
			cout << SPACE;
		else
			cout << X;
		if (i % 4 == 3)
			cout << "|" << endl; 

	}
	cout << endl;
	
}

//gets move from player
t_move getMove()
{
	t_move position;

	cout << "Please enter row(0-3)" << endl;
	do
	{
		cin >> position.row;
		if (cin.fail() || position.row < 0 || position.row > 3)
		{
			cout << "Invalid, try again" << endl;
			cin.clear();
			cin.ignore(BIG_NUM, END_LINE);
		}

	} while (position.row < 0 || position.row > 3);
	

	cout << "Please enter column(0-3)" << endl;
	do
	{
		cin >> position.col;
		if (cin.fail() || position.col < 0 || position.col > 3)
		{
			cout << "Invalid, try again" << endl;
			cin.clear();
			cin.ignore(BIG_NUM, END_LINE);
		}

	} while (position.col < 0 || position.col > 3);

	return position;
}

//displays board with moves
void displayBoard(char *board, t_move move)
{
	int place = move.row * 4 + move.col;
	for (int i = 0; i < GAME_SIZE; i++)
	{
		cout << "|";
		if(i == place)
		{
			cout << *(board + i);
		}
		else
		{
			if (*(board + i) == SPACE)
				cout << SPACE;
			else
				cout << X;
		}
		if (i % 4 == 3)
			cout << "|" << endl;
		
			  

	}
	cout << endl;
}

//checks win
bool checkWin(char *board)
{
	bool win;
	for (int i = 0; i < GAME_SIZE; i++) 
	{
		win = true;
		if (*(board + i) != SPACE)
		{
			win = false;
			i = 15;
		}
	}
	return win;
}

void updateBoard(t_move move, t_move move2, char *board)
{
	int place = move.row * 4 + move.col;
	int place2 = move2.row * 4 + move2.col;
	if (*(board + place) == *(board + place2) && (place != place2)) // checks if both moves were a match
	{
		*(board + place) = SPACE;
		*(board + place2) = SPACE;
	}
}