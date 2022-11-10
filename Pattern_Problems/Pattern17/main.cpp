#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 0;
        while (col < row)
        {
            cout << (char)('A' + col);
            col++;
        }
        int c = row - 2;
        while (c >= 0)
        {
            cout << (char)('A' + c);
            c--;
        }
        row++;
        cout << endl;
    }
}