#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{

    int n;
    cin >> n;

    int factorial = fact(n);

    cout << factorial;

    return 0;
}