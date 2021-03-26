#include <iostream>
using namespace std;

void isAlphabet(char n)
{
    if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
    {
        cout << "is alphabet." << endl;
    }
    else
    {
        cout << "not alphabet." << endl;
    }
    return;
}

int main()
{
    char n;
    cin >> n;
    isAlphabet(n);
}