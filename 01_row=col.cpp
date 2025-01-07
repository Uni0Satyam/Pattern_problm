#include <iostream>

using namespace std;
int main(){
    int r;
    cout << "Enter the number of rows: ";
    //r = 4
    cin >> r;
    for (int i = 0; i < r; i++)
    //i = 1,2,3,4
    {
        for (int j = 0; j < r; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
    return 0;
}