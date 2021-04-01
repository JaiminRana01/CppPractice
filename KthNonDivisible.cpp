#include <iostream>
using namespace std;

int main()
{
    long t;

    cin >> t;

    while (t--)
    {
        long n, k;
        cin >> n >> k;

        long x = k / (n - 1);

        if ((k + x) % n == 0)
        {
            cout << k + x - 1 << endl;
        }
        else
        {
            cout << k + x << endl;
        }
    }
    return 0;
}