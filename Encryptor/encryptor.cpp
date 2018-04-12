#include "header.h"

/*
Usage:
    string buffer = readFile(fileName);
    if (buffer == "ERROR")
    {
	    cout << "NO SUCH FILE\n";
	    return;
    }

    istringstream ss(buffer);
    string line;
    while (getline(ss, line))
    {
        // read string 'line by line'
    }
*/
string readFile(string fileName)
{
    ifstream in(fileName);
    if (in)
    {
        string tmp = "";
        string contents = "";
        while (getline(in, tmp))
        {
            contents += tmp + '\n';
        }
        return contents;
    }
    return "ERROR";
}

void writeFile(string fileName, string buffer)
{
    ofstream out;
    out.open(fileName);
    out << buffer;
    out.close();
}

string encryptEveryOther(string source)
{
	//cut out line
	//if even line Remove A then shift up
	//if odd line Meme it up
    return "not yet implemented";
}

string encryptZeroAPress(string source)
{
	source.erase(std::remove(source.begin(), source.end(), 'a'), source.end());
	source.erase(std::remove(source.begin(), source.end(), 'A'), source.end());
    return source;
}

string encryptShiftUp(string source)
{
	return "not yet implemented";
}

string encryptWithMemes(string source)
{
	return "not yet implemented";
}