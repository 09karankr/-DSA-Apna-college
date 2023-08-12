#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 5, 3, 9, 6, 2};
    int n = 6, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum of array is"
         << " " << sum;

    return 0;
}