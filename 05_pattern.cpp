// Ques:1
// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             char ch = 'A' + row - 1;
//             cout << ch << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 3
// AAA
// BBB
// CCC

// Ques:2
// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             char ch = 'A' + col - 1;
//             cout << ch << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 3
// A B C
// A B C
// A B C

// Ques:3

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     char ch = 'A';
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 3
// A B C
// D E F
// G H I

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             cout << char(row + col + 'A' - 2) << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 3
// A B C
// B C D
// C D E

// Ques:5

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << char('A'+ row - 1) << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 3
// A
// B B
// C C C

// Ques:6

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << char('A'+ row + col - 2) << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 4
// A
// B C
// C D E
// D E F G

// Ques:7

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << char('D'+ col - row) << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 4
// D
// C D
// B C D
// A B C D

// Ques:8

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             cout << char('A'+ row + col - 2) << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// Output:
// Enter the number of rows: 3
// Enter the number of rows: 3
// A B C
// B C D
// C D E

// Ques:9

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         // Print space
//         int space = n - row;
//         for (int s = 1; s <= space; s++)
//         {
//             cout << " ";
//         }
//         // Print stars
//         for (int col = 0; col < row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Output:
// Enter the number of rows: 4
//    *
//   **
//  ***
// ****