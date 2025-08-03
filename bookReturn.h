#pragma once

#include "standards.h"
#include "bookStruct.h"

using namespace std;

// Returns true if the book was successfully returned, false if not found or already available
bool returnBookByISBN(std::vector<Book>& library, const std::string& isbn);

void promptReturnBook(std::vector<Book>& library);