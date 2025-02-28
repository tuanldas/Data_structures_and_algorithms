#include <iostream>

using namespace std;

bool isValidString(const string& s)
{
    return (s.find('A') != string::npos) && (s.find('B') != string::npos);
}

void generateABStrings(int n)
{
    int total = 1 << n;

    for (int i = 0; i < total; i++)
    {
        string s;
        for (int j = n - 1; j >= 0; j--)
        {
            s += (i & (1 << j)) ? 'B' : 'A';
        }
        if (isValidString(s))
        {
            cout << s << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    generateABStrings(n);
    return 0;
}
