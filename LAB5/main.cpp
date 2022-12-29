#include "Header.h"



int main()
{
	srand(time(NULL)); //create random seed
	char play_again = 'n';
	bool game_won = false;
	
	do
	{
		char *p = createGame(); //create pointer to board array
		displayGame(p); //displays game before any moves
		do
		{
			t_move move = getMove(); //use struct to input 1st row and col move
			displayBoard(p, move); //assigns first move

			t_move move2 = getMove(); //2nd move
			displayBoard(p, move2);//assigns second move2

			updateBoard(move, move2, p);

			
			displayGame(p);

			game_won = checkWin(p);

		} while (game_won == false);
		delete [] p;

		cout << "Would you like to play again? (y or n)" << endl;
		cin >> play_again;

	} while (play_again == 'y');
	
	
	return 0;
}



