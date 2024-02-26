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
	ChessPiece() : name("Pawn"), symbol('p'), colour("white") {}

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
		board[0][0] = ChessPiece("rook", "white", 'R');
		board[0][1] = ChessPiece("knight", "white", 'N');
		board[0][2] = ChessPiece("bishop", "white", 'B');
		board[0][3] = ChessPiece("queen", "white", 'Q');
		board[0][4] = ChessPiece("king", "white", 'K');
		board[0][5] = ChessPiece("bishop", "white", 'B');
		board[0][6] = ChessPiece("knight", "white", 'N');
		board[0][7] = ChessPiece("rook", "white", 'R');

		//black pawns
		for (int i = 0; i < 8; i++) board[6][i] = ChessPiece("pawn", "black", 'P');
	}

    void display(){
        int count = 8;
        char alpha = 'a';

		//top alphabets
        alpha = 'a';
		cout << "  ";
        for(int i = 0; i < 8; i++){
			cout << "  " ;
            cout << alpha;
			cout << "   " ;
            alpha++;
        }
		
		cout << endl;
		cout << endl;

        for(int i = 0; i < 8; i++){
            cout << count << " ";
            for(int j = 0; j < 8; j++){
                cout << "  "<< board[i][j].getSymbol() << "   ";
				
            }
			
            cout << count << "  "<< endl;
			cout << endl;
            count--;
        }

		//bottom alphabets
        alpha = 'a';
		cout << "  ";
        for(int i = 0; i < 8; i++){
            cout << "  " ;
            cout << alpha;
			cout << "   " ;
            alpha++;
        }
        
    }

	bool movePiece(string source, string destination){

		//this gives us the cordinates on the gird
		int source_row = 8 - ((source[1]) - '0');
		int source_col = source[0] - 97;

		int dest_row = 8 - ((destination[1]) - '0');
		int dest_col = destination[0] - 97;

		//to check if valid for knight
		if (board[source_row][source_col].getSymbol() == 'N' || board[source_row][source_col].getSymbol() == 'n'){
			if ((abs(dest_row - source_row) == 2 && abs(dest_col - source_col) == 1) && board[dest_row][dest_col].getSymbol() == '.') return true;

		}

		if (board[source_row][source_col].getSymbol() == 'P' || board[source_row][source_col].getSymbol() == 'p'){
			if (( (abs(dest_col - source_col)) == 0 && ( (abs(dest_row - source_row) == 2) || ( abs(dest_row - source_row) == 1 ) )) && (board[dest_row][dest_col].getSymbol() == '.')) return true;
		}

	return false;
	}
};

int main()
{
    ChessBoard myboard;
    myboard.display();
	cout << endl;
	//valid moves
	//pawm

	if(myboard.movePiece("a2", "a4")) cout << "valid" << endl;
	else cout << "invalid" << endl;
	//knight
	if(myboard.movePiece("b1", "a3")) cout << "valid" << endl;
	else cout << "invalid" << endl;

	//invalid moves
	//pawm
	if(myboard.movePiece("b2", "a7")) cout << "valid" << endl;
	else cout << "invalid" << endl;
	//knight
	if(myboard.movePiece("b1", "h4")) cout << "valid" << endl;
	else cout << "invalid" << endl;
    return 0;
}




