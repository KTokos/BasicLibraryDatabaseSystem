#include "bookCheckout.h"

bool checkoutBookByISBN(vector<Book>& library, const string& isbn) {
    auto it = find_if(library.begin(), library.end(),
        [&isbn](const Book& b) { return b.isbn == isbn; });
    if (it != library.end() && it->isAvailable) {
        it->isAvailable = false;
        return true;
    }
    return false;
}

void promptCheckoutBook(vector<Book>& library) {
    cout << "Enter the ISBN of the book you want to check out: ";
    string isbn;
    getline(cin, isbn);

    if (checkoutBookByISBN(library, isbn)) {
        cout << "Book checked out successfully." << endl;
    }
    else {
        cout << "Book not found or already checked out." << endl;
    }
}