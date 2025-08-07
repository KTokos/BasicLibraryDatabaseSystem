#include "saveLibrary.h"

void saveLibrary(const vector<Book>& library, const string& filename)
{
	// Variables
	bool dot;
	bool txt;

	string temp;

	// Default values
	dot = false;
	txt = false;

	temp = "";

	// Read the last four characters of the filename to check for .txt extension
	for (char c : filename)
	{
		if (dot)
		{
			temp += c;
		}

		if (c == '.')
		{
			dot = true;
		}
	}

	if (temp != "txt")
	{
		cout << "Warning: The filename does not have a .txt extension." << endl;

		return;
	}
	else
	{
		txt = true;
	}

	// Open the file for writing if it has a .txt extension
	if (txt)
	{
		ofstream outFile(filename);
		if (!outFile) {
			cerr << "Error opening file for writing: " << filename << endl;
			return;
		}
		for (const auto& book : library) {
			outFile << book.title << ","
				<< book.author << ","
				<< book.isbn << ","
				<< (book.isAvailable ? "1" : "0") << endl;
		}
		outFile.close();
		cout << "Library saved to " << filename << endl;
	}
}