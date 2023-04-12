#include <iostream>

using namespace std;

int main()
{
    // a     -> value
    // *ptr  -> value
    // &a    -> address
    // ptr   -> address

    int a = 5;
    int *ptr;
    ptr = &a;

    cout << "value of a = " << a << endl;
    cout << "value of *ptr = " << *ptr << endl;
    cout << "address of a = " << &a << endl;
    cout << "address of ptr = " << ptr << endl;

    return 0;
}