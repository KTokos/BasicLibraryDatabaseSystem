#include "bookSort.h"

void sortLibrary(vector<Book>& library, const string& criteria)
{
	if (criteria == "title") {
		sort(library.begin(), library.end(), [](const Book& a, const Book& b) {
			return a.title < b.title;
			});
	}
	else if (criteria == "author") {
		sort(library.begin(), library.end(), [](const Book& a, const Book& b) {
			return a.author < b.author;
			});
	}
	else if (criteria == "availability") {
		sort(library.begin(), library.end(), [](const Book& a, const Book& b) {
			return a.isAvailable > b.isAvailable; // Available books first
			});
	}
	else {
		cout << "Invalid sorting criteria. Please use 'title', 'author', or 'availability'." << endl;
	}
}