#include<iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age : ";
    cin >> age;

    if(age > 150)
    {
        cout << "Re-enter your age";
    }
    else if(age > 18)
    {
        cout << "You can vote";
    }
    else
    {
        cout << "You can't vote";
    }
}