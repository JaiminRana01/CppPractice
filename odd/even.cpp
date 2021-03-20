#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int div = 2;

    if (a % div == 0)
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }
    return 0;
}