/* Programmer:Muhammad Ali 23K-0052
* Date: 15/02/24
* Descrption: Book
*/
#include <iostream>
using namespace std;


class Book
{
private:
    string name,ISBN,Author;
    int totalpage;
    int pagesread;
public:
    Book(){
        name = "harry potter";
        ISBN = "1B098IN";
        Author = "J.K Rowling";
        totalpage = 300;
        pagesread = 10;
    }

    Book(string name,string ISBN,string Author, int totalpage, int pagesread){
        this->name = name;
        this->ISBN = ISBN;
        this->Author = Author;
        this->totalpage = totalpage;
        this->pagesread = pagesread;
    }

    void Update(int read){
        this->pagesread += read;

        if (pagesread == this->totalpage) cout << "you have finished this book" << endl;
        else cout << "pages read=" << pagesread << endl << "pages left=" << totalpage - pagesread << endl; 
    }



}; 

int main()
{
    Book b1("Mein kampfe","1945","Hitler",300,10);
    b1.Update(9);
    return 0;
}
