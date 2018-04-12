#include "header.h"

int main()
{
	//get file name from user
	string buffer = readFile("testfile.txt");
	if (buffer == "ERROR")
	{
		cout << "NO SUCH FILE\n";
		return 1;
	}
	string result = encryptEveryOther(buffer); //should pass by reference but ill leave it to preserve tests

	//overwrite file
	writeFile("testfile.txt", result);

    return 0;
}