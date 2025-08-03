#include "bookReturn.h"

bool returnBookByISBN(vector<Book>& library, const string& isbn) {
    auto it = find_if(library.begin(), library.end(),
        [&isbn](const Book& b) { return b.isbn == isbn; });
    if (it != library.end() && !it->isAvailable) {
        it->isAvailable = true;
        return true;
    }
    return false;
}

void promptReturnBook(vector<Book>& library) {
    cout << "Enter the ISBN of the book you want to return: ";
    string isbn;
    getline(cin, isbn);

    if (returnBookByISBN(library, isbn)) {
        cout << "Book returned successfully." << endl;
    }
    else {
        cout << "Book not found or already available." << endl;
    }
}