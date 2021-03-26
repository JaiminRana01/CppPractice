#include <iostream>
using namespace std;

void max(int num1, int num2, int num3)
{
    int maximum;

    if (num1 >= num2 && num1 >= num3)
    {
        maximum = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        maximum = num2;
    }
    else
    {
        maximum = num3;
    }
    cout << "Maximum: " << maximum << endl;
}

void min(int num1, int num2, int num3)
{
    int minimum;
    if (num1 <= num2 && num1 <= num3)
    {
        minimum = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        minimum = num2;
    }
    else
    {
        minimum = num3;
    }
    cout << "Minimum: " << minimum << endl;
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    max(n1, n2, n3);
    min(n1, n2, n3);

    return 0;
}