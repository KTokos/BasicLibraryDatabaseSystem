#pragma once

#include "bookStruct.h"
#include "standards.h"

using namespace std;

// Function to sort the library collection by title, author, or availability
void sortLibrary(vector<Book>& library, const string& criteria);