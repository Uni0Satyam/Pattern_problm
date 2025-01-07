#include <iostream>

using namespace std;
int main(){
    int r;
    cout << "Enter the number of rows: ";
    //r = 4
    cin >> r;
    int j;
    for (int i = 1; i <= r;)
    //i = 1,2,3,4
    {
        for (j = 1; j <= r; j++)
        {
            cout << j << " ";
        }
        i++;
        cout << endl;
        
    }
    
    return 0;
}

// cout << j << " ";
// Output: 
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

// cout << r - j + 1 << " ";
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 