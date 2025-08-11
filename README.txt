============================================================
Basic Library Management System
============================================================

Author: Kristian Tokos  
Language: C++ (C++17 Standard)  
Date: July 15, 2025  

------------------------------------------------------------
Overview
------------------------------------------------------------

This is a console-based Library Management System written in C++.
It allows users to manage a collection of books with features such as:

- Viewing the library collection
- Donating new books
- Checking out and returning books
- Searching for books by title or author
- Removing books by ISBN
- Sorting the collection by title, author, or availability
- Saving and loading the library to/from a file

------------------------------------------------------------
How to Compile
------------------------------------------------------------

Make sure you have a C++17-compatible compiler.

Example using g++:
    g++ -std=c++17 -o library main.cpp standards.cpp bookStruct.cpp bookDonate.cpp bookCheckout.cpp bookReturn.cpp bookSearch.cpp bookRemove.cpp bookSort.cpp saveLibrary.cpp loadLibrary.cpp

------------------------------------------------------------
How to Run
------------------------------------------------------------

After compiling, run the executable:
    ./library

You will be presented with a menu of options to interact with the library.

------------------------------------------------------------
File Structure
------------------------------------------------------------

- main.cpp              : Main program logic and user interface
- standards.h           : Common includes and definitions
- bookStruct.h          : Definition of the Book structure
- bookDonate.h          : Functionality for donating books
- bookCheckout.h        : Functionality for checking out books
- bookReturn.h          : Functionality for returning books
- bookSearch.h          : Functionality for searching books
- bookRemove.h          : Functionality for removing books
- bookSort.h            : Functionality for sorting the library
- saveLibrary.h         : Functionality for saving the library to a file
- loadLibrary.h         : Functionality for loading the library from a file

------------------------------------------------------------
Initial Data
------------------------------------------------------------

The program starts with three preloaded books:
- "1984" by George Orwell
- "To Kill a Mockingbird" by Harper Lee
- "The Great Gatsby" by F. Scott Fitzgerald

------------------------------------------------------------
Notes
------------------------------------------------------------

- All book entries are stored in a vector of Book objects.
- ISBN is used as a unique identifier for removing books.
- Availability status is tracked for checkouts and returns.
- File operations allow persistent storage of the library.

------------------------------------------------------------
License
------------------------------------------------------------

This project is provided as-is for educational purposes.
Feel free to modify and expand it as needed.
