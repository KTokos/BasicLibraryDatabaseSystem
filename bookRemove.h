#pragma once

#include "bookStruct.h"
#include "standards.h"

using namespace std;

//Function to remove a book from the library by ISBN
bool removeBookByISBN(vector<Book>& library, const string& isbn);