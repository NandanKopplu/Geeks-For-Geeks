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
        int col = 0;
        while (col <= n - row)
        {
            cout << (char)('A' + col);
            col++;
        }
        cout << endl;
        row++;
    }
}