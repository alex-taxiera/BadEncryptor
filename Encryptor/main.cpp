#include "header.h"

int main()
{
	string fileName = userInput();
	string buffer = readFile(fileName);
	if (buffer == "ERROR")
	{
		cout << "NO SUCH FILE\n";
		return 1;
	}
	string result = encryptEveryOther(buffer); //should pass by reference but ill leave it to preserve tests

	//overwrite file
	writeFile(fileName, result);

    return 0;
}