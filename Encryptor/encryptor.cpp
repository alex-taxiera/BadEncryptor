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
    return "not yet implemented";
}

string encryptShiftUp(string source)
{
    for (char &c : source)
    {
        c += 1;
    }
	return source;
}

string encryptWithMemes(string source)
{
    string memes[5] = {"WOW", "SUCH", "SHREK", "FEELSGOODMAN", "KAPPA"};
    istringstream ss(source);
    string word;
    string result;
    int wordNum = 0;
    while (getline(ss, word, ' '))
    {
        if (wordNum != 0)
        {
            result += ' ';
        }
        if (wordNum % 2 != 0)
        {
            result += word;
        }
        else
        {
            int index = wordNum / 2;
            while (index > memes->size())
            {
                index -= memes->size();
            }
            result += memes[index];
        }
        wordNum++;
    }
	return result;
}