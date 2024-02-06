/* Programmer:Muhammad Ali 23K-0052
* Date: 06/02/24
* Descrption:library manager 
*/

#include <iostream>

using namespace std;
#define Max 100 //defining for max size

//Making structure for book
struct book 
 {
 	string title;
 	string author;
    string genre;
 	int year;
 }; 


//This function is for my own convenience
book* findbook(book *a,int size,char ref,string check){

    //a is if sreached by author t is if sreached by title 
    if (ref == 'a'){

        for (int i = 0; i < size; ++i){

		    if(a[i].author == check){
			    return &a[i];//returning data so that i can use it in other functions
	    	}	
	    }
    }

    else if (ref == 't'){

        for (int i = 0; i < size; ++i){

		    if(a[i].title == check){
			    return &a[i];
	    	}	
	    }   
    }
return nullptr; //if the book is not found it returns a null pointer
}


void printsbookdata(book *x,int size,char ref, string check){

    if(findbook(x, size, ref, check) != nullptr){

        cout << "Book title:" << endl;
        cout << findbook(x, size, ref, check)->title << endl;

        //arrows are used to access pointer
        cout << "Author:" << endl;
        cout << findbook(x, size, ref, check)->author << endl;

        cout << "Genre:" << endl;
        cout << findbook(x, size, ref, check)->genre << endl;

        cout << "Year Published :" << endl;
        cout << findbook(x, size, ref, check)->year << endl;


    }
	else cout << "book not found" << endl;
}	


void addbook(book *b, int size){

	cout << "enter book title:"<< endl; 
	cin.ignore();//this is used to remove endl form the input buffer
	getline(cin, b[size].title);

	cout << "enter author of book:"<< endl;
	getline(cin, b[size].author);

	cout << "enter genre:"<< endl;
	getline(cin, b[size].genre);

	cout << "enter year book was published in:"<< endl;
	cin >> b[size].year;
	cin.ignore();
}


void update(book *c, int size,char ref, string check){

	if(findbook(c, size, ref, check) != nullptr){//if a null pointer is not return the update happens

        if(ref == 'a'){

            cout << endl << "Enter new data:" << endl;
            //arrows are used to access pointer
            cout << "enter book title:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, c[size].title);

            cout << "enter genre:"<< endl;
            getline(cin, c[size].genre);

            cout << "enter year book was published in:"<< endl;
            cin >> c[size].year;
            cin.ignore();

            cout << "enter author of book:"<< endl;
            getline(cin, c[size].author);

        }

        else if(ref == 't'){

            cout << endl << "Enter new data:" << endl;
            //arrows are used to access pointer
            cout << "enter author of book:"<< endl;
            getline(cin, c[size].author);
            
            cout << "enter genre:"<< endl;
            getline(cin, c[size].genre);

            cout << "enter year book was published in:"<< endl;
            cin >> c[size].year;
            cin.ignore();

            cout << "enter author of book:"<< endl;
            getline(cin, c[size].author);

            cout << "enter book title:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, c[size].title);
        }
	}
	else cout <<  "book not found" << endl;
}

int main()
{
	int choice = 0; 
	int num;
	string key;
    char r;
	book data[Max];
	num = 0;
	//simple UI
	while (choice != 4)
	{
		cout << "Welcome to book managemnet system" << endl << "Enter choice:" << endl;
		cout << "1.Add new book" << endl << "2.Search for Book by title or author" << endl << "3.Update book Data" << endl << "4.Exit" << endl;
		cin >> choice;


		switch (choice)
		{
		case 1:

			addbook(data, num);
			num++;
			break;

		case 2:

            cout << "Enter name of author/title of book you want to search for:" << endl;
            cin.ignore();
			getline(cin ,key);
			cout << "Press t if you entered title and a if you entered author:" << endl;
			cin >> r;
			printsbookdata(data,num,r, key);
			break;

		case 3: 

		    cout << "Enter name of author/title of book whose data you wish to update:" << endl;
            cin.ignore();
			getline(cin ,key);
			cout << "Press t if you entered title and a if you entered author:" << endl;
			cin >> r;

			update(data,num,r, key);
			break;

		default:
			break;
		}
	} 
	
	return 0;
}