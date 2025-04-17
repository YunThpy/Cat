#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;      

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " 11";
    }
    cout << endl;
}