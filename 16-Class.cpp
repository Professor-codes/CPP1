#include <iostream>

using namespace std;

class employee
{
public:
    string name;
    float salary;
};

int main()
{
    employee info;
    info.name = "abcd";
    info.salary = 20370.55;

    cout << "Name   : " << info.name << endl;
    cout << "Salary : " << info.salary << endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// class student
// {
// public:
//     int num;
//     string name;
//     int marks;
// };

// int main()
// {
//     student det1;
//     det1.num = 1;
//     det1.name = "abcd";
//     det1.marks = 90;

    // cout << "Number : " << det1.num << endl;
    // cout << "Name   : " << det1.name << endl;
    // cout << "Marks  : " << det1.marks << endl;
    // cout << endl;

    // student det2;
//     det2.num = 2;
//     det2.name = "efgh";
//     det2.marks = 80;

//     cout << "Number : " << det2.num << endl;
//     cout << "Name   : " << det2.name << endl;
//     cout << "Marks  : " << det2.marks << endl;
//     cout << endl;

//     return 0;
// }