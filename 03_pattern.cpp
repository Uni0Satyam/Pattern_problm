#include <iostream>

using namespace std;

int main(){
    int n = 3;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
        
    }
    
    return 0;
}

// Output:
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>

using namespace std;

int main(){
    int n;
    int a = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    
    return 0;
}

// Output:
// Enter the number of rows: 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 