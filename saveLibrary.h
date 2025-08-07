#pragma once

#include "bookStruct.h"
#include "standards.h"

using namespace std;

//Function to save the library collection to a file
void saveLibrary(const vector<Book>& library, const string& filename);