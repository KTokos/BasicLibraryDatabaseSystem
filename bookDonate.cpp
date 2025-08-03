#include "bookDonate.h"

void donateBook(vector<Book>& library)
{
	string title, author, isbn;
	cout << "Enter the book title: ";
	getline(cin, title);
	cout << "Enter the book author: ";
	getline(cin, author);
	cout << "Enter the book ISBN: ";
	getline(cin, isbn);
	// Create a new Book object and add it to the library
	library.push_back(Book(title, author, isbn));
	cout << "Thank you for donating \"" << title << "\" by " << author << "!" << endl;
}
