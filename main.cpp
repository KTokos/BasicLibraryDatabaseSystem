/************************************************
*
* Basic Library Management System
*
* Kristian Tokos
* C++17 Standard
* 07/15/2025
*
************************************************/

// TASKS
// 0. Keep everything clean and organized
// 0.5 Add the ability to add books to the library
// 1. Add the ability to check out books
// 2. Add the ability to return books
// 3. Implement a search feature to find books by title or author
// 4. Add a feature to list all available books
// 5. Implement a feature to remove books from the library
// 6. Add a feature to save the library collection to a file
// 7. Implement a feature to load the library collection from a file
// 8. Add error handling for invalid inputs
// 9. Implement a user interface for better interaction
// 10. Add a feature to sort books by title, author, or availability

// Include necessary headers
#include "standards.h"
#include "bookStruct.h"
#include "bookDonate.h"
#include "bookCheckout.h"  
#include "bookReturn.h"
#include "bookSearch.h"
#include "bookRemove.h"
#include "bookSort.h"
#include "saveLibrary.h"

using namespace std;

// ---------- Function headers ----------
void outputDivider();

int main(void)
{
	// Necessary Variables
	string query; // For searching books
	string isbnToRemove; // For removing books by ISBN
	string criteria; // For sorting criteria
	string filename; // For saving the library to a file

    // Create a vector to hold Book objects
    vector<Book> library;

    // Add some books to the library
    library.push_back(Book("1984", "George Orwell", "1234567890"));
    library.push_back(Book("To Kill a Mockingbird", "Harper Lee", "0987654321"));
    library.push_back(Book("The Great Gatsby", "F. Scott Fitzgerald", "1122334455"));

    // Prompt the user with various options involving book management / the library
    // User is kept in loop until valid input is received
    bool loopVar = true;
    do
    {
        cout << endl;
        outputDivider();
        cout << endl;

        cout << "What would you like to do?" << endl;
        cout << "1. View library collection" << endl;
        cout << "2. Donate a book" << endl;
        cout << "3. Check out a book" << endl;
        cout << "4. Return a book" << endl;
		cout << "5. Search for a book" << endl;
		cout << "6. Remove a book" << endl;
		cout << "7. Sort library collection" << endl;
		cout << "8. Save library collection to file" << endl;
        cout << "9. Exit" << endl << endl;
        cout << "Please enter your choice (1-9): ";

        int choice;
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        cout << endl;
        outputDivider();
        cout << endl;

        // Switch statement to handle user input
        switch (choice)
        {
        case 1:
            cout << "Viewing library collection..." << endl << endl;
            for (const auto& book : library) {
                cout << "Title: " << book.title << ", Author: " << book.author
                    << ", ISBN: " << book.isbn
                    << ", Available: " << (book.isAvailable ? "Yes" : "No") << endl;
            }
            break;
        case 2:
            donateBook(library);
            break;
        case 3:
            promptCheckoutBook(library);
            break;
        case 4:
            promptReturnBook(library);
            break;
        case 5:
			// Search for a book by title or author
			cout << "Enter a title or author to search for: ";
			getline(cin, query);
			searchBooks(library, query);

            break;
        case 6:
			// Remove a book by ISBN
			cout << "Enter the ISBN of the book to remove: ";
			getline(cin, isbnToRemove);
			if (removeBookByISBN(library, isbnToRemove)) {
				cout << "Book removed successfully." << endl;
			}
			else {
				cout << "Book not found or could not be removed." << endl;
                }
			break;
        case 7:
			// Sort the library collection
			cout << "Enter sorting criteria (title, author, availability): ";
			getline(cin, criteria);
			sortLibrary(library, criteria);
			cout << "Library sorted by " << criteria << "." << endl;
			break;
        case 8:
            // Save the library collection to a file
            cout << "Enter the filename to save the library collection: ";
            getline(cin, filename);
            saveLibrary(library, filename);
            break;
        case 9:
            cout << "Exiting the program." << endl;
            loopVar = false;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

    } while (loopVar);

    return 0;
}

// ---------- Function Definitions ----------

void outputDivider()
{
    cout << setfill('-') << setw(50) << " " << setfill(' ') << endl;
}
