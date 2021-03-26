#include <iostream>
using namespace std;

void num(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
}

int main()
{
    int n;
    cin >> n;
    num(n);
    return 0;
}