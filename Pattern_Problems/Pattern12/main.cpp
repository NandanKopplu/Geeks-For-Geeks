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
        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }
        int space = (n - row) * 2;
        while (space >= 1)
        {
            cout << "  ";
            space--;
        }
        int c = 1;
        while (c <= row)
        {
            cout << row - c + 1 << " ";
            c++;
        }
        cout << endl;
        row++;
    }
}