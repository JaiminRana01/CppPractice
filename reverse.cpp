#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rev = 0;
    int temp = n;
    while (temp > 0)
    {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp /= 10;
    }

    cout << rev << endl;
    return 0;
}