#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter the letter: ";
    cin >> letter;

    switch (letter)
    {
    case 'a':
        cout << "It's a vowel.";
        break;

    case 'e':
        cout << "It's a vowel.";
        break;

    case 'i':
        cout << "It's a vowel.";
        break;

    case 'o':
        cout << "It's a vowel.";
        break;

    case 'u':
        cout << "It's a vowel.";
        break;
    default:
        cout << "It's a consanant.";
    }
}