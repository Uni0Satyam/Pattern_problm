// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// Output:
// Enter the number of rows: 4
// i =1
// j =1
// *
// **
// ***
// ****

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// Output:
// Enter the number of rows: 4
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 