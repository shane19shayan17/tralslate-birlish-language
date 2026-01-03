#include <iostream>

using namespace std;

string is_reversed(string a, string b)
{
    int str_lenght = a.size();
    if (str_lenght != b.size())
    {
        return "NO";
    }
    for (int i = 0; i < str_lenght; i++)
    {
        if (a[i] != b[str_lenght - i - 1])
        {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    string word;
    cin >> word;
    string translate;
    cin >> translate;

    cout << is_reversed(word, translate) << endl;

    return 0;
}