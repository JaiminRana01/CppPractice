#include <iostream>
using namespace std;

int sum(int n)
{
    int num = 1;
    for (int i = 2; i <= n; i++)
    {
        num += i;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n);
    return 0;
}