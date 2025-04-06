#include <iostream>
using namespace std;

class Book
{
private:

    string title;
    string author;
    string date;
    string genre;

public: 
    Book(string title, string author, string date, string genre)
    {
        this->title = title;
        this->author = author;
        this->date = date;
        this->genre = genre;
    }

    ~Book()
    {

    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "Book Release Date: " << date << endl;
        cout << "Book Genre: " << genre << endl;
    };

    int main ()
    {
        Book Book1("Secret lang", "Sophia Macandile", "Septembe 16, 2004", "Horror");
        Book1.display();

        return 0;
    }
    
};
