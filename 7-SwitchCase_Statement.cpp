#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter number : ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Number = 1";
        break;

    case 2:
        cout << "Number = 2";
        break;

    case 3:
        cout << "Number = 3";
        break;

    default:
        cout << "Re-enter number";

    }

    return 0;
}