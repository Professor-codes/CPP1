#include <iostream>

using namespace std;

int main()
{
    //     int arr[3] = {1, 2, 3};

    //     cout << "First position  = " << arr[0] << endl;
    //     cout << "Second position = " << arr[1] << endl;
    //     cout << "Third position  = " << arr[2] << endl;

    // // 1D Array
    // int i;
    // int arr[6];

    // for (i = 0; i < 6; i++)
    // {
    //     cout << "Enter number " << i << " : ";
    //     cin >> arr[i];
    // }

    // for (i = 0; i < 6; i++)
    // {
    //     cout << "Number = ";
    //     cout << arr[i]<<endl;
    // }

    // 2D Array
    int i, j;
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "(" << i << ", " << j << ")" << " = " << arr[i][j] << endl;
        }
    }

    return 0;
}
