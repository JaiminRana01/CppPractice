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

    for (int i = 0; i < n; i++)
    {
        candies[i] = candies[i] + extraCandies;
    }

    int maxNo = extraCandies + candies[0];
    cout << maxNo