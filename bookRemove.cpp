#include "bookRemove.h"

bool removeBookByISBN(vector<Book>& library, const string& isbn)
{
	auto it = find_if(library.begin(), library.end(),
		[&isbn](const Book& b) { return b.isbn == isbn; });
	if (it != library.end()) {
		library.erase(it);
		return true;
	}
	return false;
}