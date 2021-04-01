#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int arr[11] = {0};

        for (int i = 0; i < n; i++)
        {
            int p, s;
            cin >> p >> s;

            if (p < 9 && arr[p - 1] < s)
            {
                arr[p - 1] = s;
            }
        }

        int sum = 0;

        for (int i = 0; i < 11; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }
    return 0;
}