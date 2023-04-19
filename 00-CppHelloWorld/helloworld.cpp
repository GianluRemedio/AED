#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hola", "C++,", "soy", "Gian", "from", "Devil Man Cry Series"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}