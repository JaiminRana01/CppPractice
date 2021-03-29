#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n, extraCandies;
    cin >> n;

    int candies[n];
    bool check[n];

    for (int i = 0; i < n; i++)
    {
        cin >> candies[i];
    }

    cout << "Enter extra candies: ";
    cin >> extraCandies;

    int maxCandies = extraCandies + candies[0];

    for (int i = 0; i < n; i++)
    {
        candies[i] = candies[i] + extraCandies;
    }

    for (int i = 0; i < n; i++)
    {
        check[i] = candies[i] >= maxCandies ? true : false;
    }

    for (int i = 0; i < n; i++)
    {
        cout << check[i] << " ";
    }

    return 0;
}