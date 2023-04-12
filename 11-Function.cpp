#include<iostream>

using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;

    cout << "Enter number : ";
    cin >> a;
    cout << "Enter number : ";
    cin >> b;

    cout << "sum = " << sum(a, b);

    return 0;
}