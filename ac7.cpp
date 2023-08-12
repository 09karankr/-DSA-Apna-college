#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            cout << "non prime";
            break;
        }
    }
    if (i == n)
    {
        cout << "prime";
    }

    return 0;
}