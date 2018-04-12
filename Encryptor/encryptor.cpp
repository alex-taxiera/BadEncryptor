#include <string>
#include <sstream>
#include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;
using std::istringstream;

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
    return "not yet implemented";
}

string encryptZeroAPress(string source)
{
    return "not yet implemented";
}

string encryptShiftUp(string source)
{
	return "not yet implemented";
}

string encryptWithMemes(string source)
{
	return "not yet implemented";
}