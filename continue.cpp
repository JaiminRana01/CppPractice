#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        cout << i << " ";
    }

    return 0;
}