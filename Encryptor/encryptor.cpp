#include "header.h"

string userInput()
{
    cout << "ENTER FILE NAME: ";
    string input = "";
    getline(cin, input);
    if (input == "")
    {
        input = "0";
    }
    return input;
}

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
	istringstream ss(source);
	string line;
	string result = "";
	int i = 0;
	while (getline(ss, line))
	{
		if (i % 2 == 0)
		{
			line = encryptZeroAPress(line);
			line = encryptShiftUp(line);
		}
		else
		{
			line = encryptWithMemes(line);
		}
		result = result + line + '\n';
		i += 1;
	}
	//remove the trailing newline
	result.pop_back();
    return result;
}

string encryptZeroAPress(string source)
{
	source.erase(std::remove(source.begin(), source.end(), 'a'), source.end());
	source.erase(std::remove(source.begin(), source.end(), 'A'), source.end());
    return source;
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