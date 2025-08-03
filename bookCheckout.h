#pragma once
#include "bookStruct.h"
#include "standards.h"

using namespace std;

// Returns true if the book was successfully checked out, false if not found or already checked out
bool checkoutBookByISBN(std::vector<Book>& library, const std::string& isbn);

void promptCheckoutBook(std::vector<Book>& library);