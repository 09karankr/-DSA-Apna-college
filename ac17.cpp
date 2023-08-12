#include <iostream>
#include <math.h>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
//#include "bits/stdc++.h"
using namespace std;

/*bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}
void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++)

    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fib(n);

    return 0;
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{

    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;

    return 0;
}
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{

    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans << endl;
    return 0;
}
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}

int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
         code
b = y;
c = z;
}
else if (a == y)
{
     code
    b = x;
    c = z;
}
else
{
    b = x;
    c = y;
}
if (a * a == b * b + c * c)
{
    return true;
}
else
{
    return false;
}
}

int main()
{

    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "pythagorus triplets";
    }
    else
    {
        cout << "not a pythagorus triplet";
    }

    return 0;

    int binaryToDecimal(int n)
    {
        int ans = 0;
        int x = 1;
        while (n > 0)
        {
            int y = n % 10;
            ans = ans + x * y;
            x = x * 2;
            n = n / 10;
        }
        return ans;
    }
    int octalToDecimal(int n)
    {
        int ans = 0;
        int x = 1;
        while (n > 0)
        {
            int y = n % 10;
            ans = ans + x * y;
            x = x * 8;
            n = n / 10;
        }
        return ans;
    }

    int main()
    {

        int n;
        cin >> n;
        cout << octalToDecimal(n) << endl;

        return 0;
    }
    int main()
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i <= n; i++)
        {
            cin >> arr[i];
        }

        int maxNo = INT_MIN;
        int minNo = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxNo = max(maxNo, arr[i]);
            minNo = min(minNo, arr[i]);
        }
        cout << maxNo << " " << minNo << endl;

        return 0;
    }
    int linearsearch(int arr[], int n, int key)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
        return -1;
    }

    int main()
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;

        cout << linearsearch(arr, n, key) << endl;
        return 0;
    }
    int binarysearch(int arr[], int n, int key)
    {
        int s = 0;
        int e = n;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }

    int main()
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        cout << binarysearch(arr, n, key) << endl;

        return 0;
    }

    int main()
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }

    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int counter = 1;
        while (counter < n)
        {
            for (int i = 0; i < n - counter; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            counter++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }
    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++)
        {
            int current = arr[i];
            int j = i - 1;
            while (arr[j] > current && j >= 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = current;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }
    int main()
    {
        int mx = -199999999;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            cout << mx << endl;
        }

        return 0;
    }
    int main()
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                curr = curr + a[j];
                cout << curr << endl;
            }
        }

        return 0;
    }
    int main()
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 2;
        int pd = a[1] - a[0];
        int curr = 2;
        int j = 2;
        while (j < n)
        {

            if (pd == a[j] - a[j - 1])
            {
                curr++;
            }
            else
            {
                pd = a[j] - a[j - 1];
                curr = 2;
            }
            ans = max(ans, curr);

            j++;
        }
        cout << ans << endl;

        return 0;
    }
    int main()
    {

        int n;
        cin >> n;
        int a[n + 1];
        a[n] = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << "1" << endl;
            return 0;
        }

        int ans = 0;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mx && a[i] > a[i + 1])
            {
                ans++;
            }
            mx = max(mx, a[i]);
        }
        cout << ans << endl;

        return 0;
    }

#include <iostream>
#include <math.h>
    using namespace std;
    int main()
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        int n;
        cin >> n;
        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << count << " ";
                count++;
            }
            cout << endl;
        }
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            int space = 2 * n - 2 * i;
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n + 1 - i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
             code
            for (int j = 1; j <= i; j++)
            {
                code
                if ((i + j) % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << endl;
        }
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int j;
            for (int j = 1; j <= n - i; j++)
            {
                 code
                cout << " ";
            }
            int k = i;
            for (; j <= n; j++)
            {
                cout << k-- << " ";
            }
            k = 2;
            for (; j <= n + i - 1; j++)
            {
                cout << k++ << " ";
            }
            cout << endl;
        }

        return 0;
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        // }

        int a, b, c;

        cin >> a >> b >> c;

        if (a > b)
        {
            if (a > c)
            {
                cout << a << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else
        {
            if (b > c)
            {
                cout << b << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        int n;
        cin >> n;
        bool flag = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << "non-prime" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "prime";
        }

        int n;
        cin >> n;
        int reverse;
        while (n > 0)
        {
            int lastdigit = n % 10;
            reverse = reverse * 10 + lastdigit;
            n = n / 10;
        }
        cout << reverse << endl;

        int n;
        cin >> n;
        int sum;
        int originaln = n;
        while (n > 0)
        {
            int lastdigit = n % 10;
            sum += pow(lastdigit, 3);
            n = n / 10;
        }
        if (sum == originaln)
        {
            cout << "armstrong number" << endl;
        }
        else
        {
            cout << "not armstrong" << endl;
        }

        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            if (isPrime(i))
            {
                cout << i << endl;
            }
        }

        return 0;
    }

    int main()
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        const int N = 1e6 + 2;
        int idx[N];

        for (int i = 0; i < N; i++)
        {
            idx[i] = -1;
        }
        int minidx = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (idx[a[i]] != -1)
            {
                minidx = min(minidx, idx[a[i]]);
            }
            else
            {
                idx[a[i]] = i;
            }
        }

        if (minidx == INT_MAX)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << minidx + 1 << endl;
        }

        return 0;
    }
    int main()
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
        while (row_start <= row_end && column_start <= column_end)
        {
            // for row_start
            for (int col = column_start; col <= column_end; col++)
            {
                cout << a[row_start][col] << " ";
            }

            row_start++;

            // for column_end
            for (int row = row_start; row <= row_end; row++)
            {
                cout << a[row][column_end] << " ";
            }
            column_end--;

            // for row_end
            for (int col = column_end; col >= column_start; col--)
            {
                cout << a[row_end][col] << " ";
            }
            row_end--;

            // for column_start

            for (int row = row_end; row >= row_start; row--)
            {
                cout << a[row][column_start] << " ";
            }
            column_start++;
        }

        return 0;
    }

    int main()
    {

        int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; j < 3; j++)
            {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }

    int main()
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int m1[n1][n2];
        int m2[n2][n3];

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                cin >> m1[i][j];
            }
        }
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n3; j++)
            {
                cin >> m2[i][j];
            }
        }
        int ans[n1][n3];

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n3; j++)
            {
                ans[i][j] = 0;
            }
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n3; j++)
            {
                for (int k = 0; k < n2; k++)
                {
                    ans[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n3; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }
    int main()
    {

        int n, m;
        cin >> n >> m;
        int target;
        cin >> target;
        int mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        int r = 0, c = m - 1;
        bool found;
        while (r < n and c >= 0)
        {
            if (mat[r][c] == target)
            {
                found = true;
            }
            if (mat[r][c] > target)
            {
                c--;
            }
            else
            {
                r++;
            }
            if (found)
            {
                cout << "element found" << endl;
            }
            else
            {
                cout << "element does not found" << endl;
            }
        }

        return 0;
    }
    int main()
    {

        char arr[100] = "apple";
        int i = 0;
        while (arr[i] != '\0')
        {
            cout << arr[i] << endl;
            i++;
        }

        return 0;
    }
    int main()
    {
        // check for palindrome
        int n;
        cin >> n;
        char arr[n + 1];
        cin >> arr;
        bool check = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[n - 1 - i])
            {
                check = 0;
                break;
            }
        }
        if (check == true)
        {
            cout << "word is a palindrome" << endl;
        }
        else
        {
            cout << "word is not a palindrome" << endl;
        }

        return 0;
    }

    int main()
    {

        // largest word in a sentence
        int n;
        cin >> n;
        cin.ignore();
        char arr[n + 1];
        cin.getline(arr, n);
        cin.ignore();
        int i = 0;
        int currlen = 0, maxlen = 0;
        while (1)
        {
            if (arr[i] == ' ' || arr[i] == '\0')
            {
                if (currlen > maxlen)
                {
                    maxlen = currlen;
                }
                currlen = 0;
            }
            else
            {
                currlen++;
            }
            if (arr[i] == '\0')
            {
                break;
                i++;
            }
            cout << maxlen << endl;
        }

        return 0;
    }

    int main()
    {

        int a = 10;
        int *aptr = &a;
        cout << aptr << endl;
        aptr++;
        cout << aptr << endl;

        return 0;
    }

    int main()
    {
        string str = "hgdtyjhkyudsfdgjm";
        // convert into upper case
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] > 'a' && str[i] < 'z')
            {
                str[i] -= 32;
            }
            cout << str << endl;
        }

        return 0;
    }
    int main()

    {

        string s = "haaajsdajhfaefkj";
        int freq[26];
        for (int i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        char ans = 'a';
        int maxF = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] >= maxF)
            {
                maxF = freq[i];
                ans = i + 'a';
            }
        }
        cout << maxF << " " << ans << endl;
        return 0;
    }
    void primesieve(int n)
    {
        int prime[100] = {0};
        for (int i = 2; i < n; i++)
        {
            if (prime[i] == 0)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = 1;
                }
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (prime[i] == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    int main()
    {

        int n;
        cin >> n;
        primesieve(n);
        return 0;
    }

    int divisible(int n, int a, int b)
    {
        int c1 = n / a;
        int c2 = n / b;
        int c3 = n / (a * b);
        return c1 + c2 - c3;
    }

    int main()
    {
        int n, a, b;
        cin >> n >> a >> b;
        cout << divisible(n, a, b) << endl;
        ;

        return 0;
    }
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    int main()
    {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << endl;

        return 0;
    }
    int sum(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        int prevsum = sum(n - 1);

        return n +
               prevsum;
    }

    int main()
    {
        int n;
        cin >> n;
        cout << sum(n) << endl;
        return 0;
    }
int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    int prevpower = power(n, p - 1);
    return n * prevpower;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << endl;
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prevfact = factorial(n - 1);
    return n * prevfact;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello world,my name is aniket";
    return 0;
}

bool sorted(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    cout << sorted(arr, 5) << endl;

    return 0;
}
void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    inc(n);

    return 0;
}

int firstocc(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i + 1, key);
}
int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstocc(arr, 7, 0, 2) << endl;
    return 0;
}
int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restarray = lastocc(arr, n, i + 1, key);
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{

    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << lastocc(arr, 7, 0, 2) << endl;
    return 0;
}

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{
    reverse("mynameiskarankumar");
    return 0;
}

void replacePi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main()
{

    replacePi("pippppiiiipi");

    return 0;
}

void towerofHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }

    towerofHanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << "to " << dest << endl;
    towerofHanoi(n - 1, helper, dest, src);
}

int main()
{
    towerofHanoi(3, 'A', 'C', 'B');
    return 0;
}
string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}

int main()
{
    cout << removeDup("aaaaaabbbbbeeeecdddd");

    return 0;
}
string moveallX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    cout << moveallX("gxxjioxkgxxert");

    return 0;
}

void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
}

int main()
{

    subseq("ABCDEFGHI", "");
    cout << endl;

    return 0;
}
void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
    subseq(ros, ans + to_string(code));
}

int main()
{

    subseq("ABCDEFGHIJ", "");

    return 0;
}
void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permutation(ros, ans + ch);
    }
}

int main()
{
    permutation("ABCDE", "");
    return 0;
}

int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count = count + countPath(s + i, e);
    }
    return count;
}
int main()
{
    cout << countPath(0, 3) << endl;
    return 0;
}

int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}
int main()
{

    cout << countPathMaze(3, 0, 0);

    return 0;
}
int tilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{

    cout << tilingWays(4);

    return 0;
}
int friendsPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
}

int main()
{

    cout << friendsPairing(4) << endl;

    return 0;
}
int knapsack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] > W)
    {
        return knapsack(value, wt, n - 1, W);
    }
    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
}
int main()
{

    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;

    cout << knapsack(value, wt, 3, W) << endl;

    return 0;
}

vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    permute(a, 0);
    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}

************************ *******************************


void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

***************** ***************************

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    } // 1 2 3

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    } // 1 2 3

    for (auto element : v)
    {
        cout << element << endl;
    }

    v.pop_back(); // 1 2

    vector<int> v2(3, 50);
    // 50 50 50

    swap(v, v2);
    for (auto element : v)
    {
        cout << element << endl;
    }
    for (auto element : v2)
    {
        cout << element << endl;
    }
    sort(v.begin(), v.end());

    return 0;
}

*****************************  ***************************

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<pair<int, int>> v;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}


****************************************************

void countSort(int arr[], int n)

{
    int maxElement = arr[0];
    for (int i = 0; i < n; i++)

    {
        maxElement = max(maxElement, arr[i]);
    }

    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxElement; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{

    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//*********************** ********************************
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnfSort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{

    int arr[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    dnfSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}*/

int main(){
    
}




