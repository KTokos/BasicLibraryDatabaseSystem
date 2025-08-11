#pragma once

#include "bookStruct.h"
#include "standards.h"

using namespace std;

// Function to load the library collection from a file
void loadLibrary(vector<Book>& library, const string& filename);