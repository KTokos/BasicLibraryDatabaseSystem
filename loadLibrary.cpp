#include "loadLibrary.h"

void loadLibrary(vector<Book>& library, const string& filename)
{
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "Error: Could not open file " << filename << endl;
		return;
	}
	library.clear(); // Clear existing library before loading
	string title, author, isbn, isAvailable;
	while (file) {
		getline(file, title, ','); // Read title until the comma
		getline(file, author, ','); // Read author until the comma
		getline(file, isbn, ','); // Read ISBN until the comma
		getline(file, isAvailable); // Read availability status until the newline

		if (title.empty() || author.empty() || isbn.empty()) {
			continue; // Skip empty lines or incomplete records
		}

		// Assuming every book is already available when loaded
		library.push_back(Book(title, author, isbn));
	}
	file.close();
	cout << "Library loaded successfully from " << filename << endl;
}