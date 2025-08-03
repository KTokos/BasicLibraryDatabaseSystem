#pragma once

#include "bookStruct.h"
#include "standards.h"

using namespace std;

// Function to search for books by title or author
void searchBooks(const std::vector<Book>& library, const std::string& query);