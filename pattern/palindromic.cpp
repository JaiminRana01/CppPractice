#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter row: ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}