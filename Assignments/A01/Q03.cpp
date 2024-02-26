/* Programmer:Muhammad Ali 23K-0052
* Date: 26/02/24
* Descrption:chess board
*/

#include <iostream>

using namespace std;

class ChessPiece
{
private:
    string name;
    char symbol;
    string colour;

public:
    // default constructor 
	ChessPiece() : name("P"), symbol('p'), colour("white") {}

    //parametrized constructor
    ChessPiece(string n, string c, char s) : name(n), symbol(s) ,colour(c) {}

    //getters
    string getColour() { return colour; }
    char getSymbol() { return symbol; }
	string getName() { return name; }

    //setters
	void setColor(string colour) { this->colour = colour; }
    void setSymbol(char symbol) { this->symbol; }
	void setName(string name) { this->name = name; }


};

class ChessBoard
{
private:
    
	ChessPiece board[8][8];
	
public:
    ChessBoard()
	{
		//white pieces
		board[7][0] = ChessPiece("rook", "white", 'r');
		board[7][1] = ChessPiece("knight", "white", 'n');
		board[7][2] = ChessPiece("bishop", "white", 'b');
		board[7][3] = ChessPiece("queen", "white", 'q');
		board[7][4] = ChessPiece("king", "white", 'k');
		board[7][5] = ChessPiece("bishop", "white", 'b');
		board[7][6] = ChessPiece("knight", "white", 'n');
		board[7][7] = ChessPiece("rook", "white", 'r');

		// white pawns
		for (int i = 0; i < 8; i++) board[1][i] = ChessPiece();//since we have default constuctor

		// empty blocks white spaces
		for (int i = 2; i < 6; i++)
		{
			for (int j = 0; j < 8; j++) 
			{
				board[i][j] = ChessPiece("none","", '.');
			}
		}

		// black pieces
		board[0][0] = ChessPiece("rook", "white", 'r');
		board[0][1] = ChessPiece("knight", "white", 'n');
		board[0][2] = ChessPiece("bishop", "white", 'b');
		board[0][3] = ChessPiece("queen", "white", 'q');
		board[0][4] = ChessPiece("king", "white", 'k');
		board[0][5] = ChessPiece("bishop", "white", 'b');
		board[0][6] = ChessPiece("knight", "white", 'n');
		board[0][7] = ChessPiece("rook", "white", 'r');

		//black pawns
		for (int i = 0; i < 8; i++) board[6][i] = ChessPiece("pawn", "black", 'p');
	}

    void display(){
        int count = 8;
        char alpha = 'a';

        for(int i = 0; i < 8; i++){
            cout << alpha << endl;
            alpha++;
        }

        for(int i = 0; i < 8; i++){
            cout << count ;
            for(int j = 0; j < 8; j++){
                cout << board[i][j];
            }
            cout << count << endl;
            count--;
        }

        alpha = 'a';
        for(int i = 0; i < 8; i++){
            cout << alpha << endl;
            alpha++;
        }
        
    }
};

int main()
{
    ChessBoard myboard;
    myboard.display();

    return 0;
}




