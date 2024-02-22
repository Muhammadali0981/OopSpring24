/* Programmer:Muhammad Ali 23K-0052
* Date: 22/02/24
* Descrption: Improved Book
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
    Book() : totalpage(1000), pagesread(0) {}

    void setname(string n) {
        name = n; 
    }

    void setauthor(string a) {
        Author = a;
    }

    void setisbn(string isbn) {
        ISBN = isbn; 
    }

    void Update(int read){
        this->pagesread += read;

        if (pagesread == this->totalpage) cout << "you have finished this book" << endl;
        else cout << "pages read=" << pagesread << endl << "pages left=" << totalpage - pagesread << endl; 
    }

    void showBookinfo() {
        cout << "Name: " << name << endl << "Author: " << Author << endl << "ISBN: " << ISBN << endl<< "Page Count: " << totalpage << endl << "Pages Read: " << pagesread << endl;
    }

}; 

int main()
{
    Book b1;
    b1.setauthor("Karl Marx");
    b1.setname("Communist Manefisto");
    b1.setisbn("567890B7");
    b1.showBookinfo();

    return 0;
}
