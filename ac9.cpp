#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Input a character"
         << " ";
    cin >> button;
    // if (button == 'a')
    // {
    //     cout << "hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "Namste" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "Salut" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "Hola" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "cio" << endl;
    // }
    // else
    // {
    //     cout << "I need to learn new things";
    // }

    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "Namste" << endl;
        break;
    case 'c':
        cout << "cio" << endl;
        break;
    case 'd':
        cout << "tola" << endl;
        break;
    case 'e':
        cout << "salut" << endl;
        break;

    default:
        cout << "I am still learning" << endl;
        break;
    }
    return 0;
}