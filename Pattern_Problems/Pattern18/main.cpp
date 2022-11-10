#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;

    int row = 1;
    char c = 'A' + n - 1;
    while (row <= n)
    {
        int col = 0;
        while (col < row)
        {
            cout << (char)(c - col) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}