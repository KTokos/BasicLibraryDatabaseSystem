#include "bookSearch.h"

void searchBooks(const vector<Book>& library, const string& query)
{
	cout << "Search results for \"" << query << "\":" << endl;
	bool found = false;
	for (const auto& book : library) {
		if (book.title.find(query) != string::npos || book.author.find(query) != string::npos) {
			cout << "Title: " << book.title << ", Author: " << book.author
				<< ", ISBN: " << book.isbn
				<< ", Available: " << (book.isAvailable ? "Yes" : "No") << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "No books found matching your search." << endl;
	}
}
