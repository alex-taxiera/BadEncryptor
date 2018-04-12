#ifndef _HEADER
#define _HEADER

#include <string>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::istringstream;

string encryptEveryOther(string source);
string encryptZeroAPress(string source);
string encryptShiftUp(string source);
string encryptWithMemes(string source);
string readFile(string fileName);

#endif // !_HEADER
