#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {

        // for 1st triangle
        int spaces = n - row;
        for (int s = 1; s <= spaces; s++)
        {
            cout << " ";
        }

        // for 2nd triangle
        for (int i = 1; i <= row; i++)
        {
            cout << i;
        }

        // for 3rd triangle
        int start = row - 1;
        for (int j = 1; j <= start; j++)
        {
            cout << start;
            start--;
        }

        cout << endl;
    }

    return 0;
}

// Output:
// Enter the number of rows: 4
//    1
//   121
//  12321
// 1234321
