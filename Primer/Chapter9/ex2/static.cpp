/*************************************************************************
	> File Name: static.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 17:01:14 2017
 ************************************************************************/

// static.cpp -- using a static local variable
#include <iostream>
#include <string>

// function prototype
void strcount(const std::string s);

int main()
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin && input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    
    return 0;
}

void strcount(const std::string s)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << s <<"\" contains ";
    count = s.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}

