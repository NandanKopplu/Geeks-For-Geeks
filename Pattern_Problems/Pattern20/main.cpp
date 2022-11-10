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
            cout << "*";
            col++;
        }
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int sp = n - row;
        while (sp)
        {
            cout << " ";
            sp--;
        }
        int star = 1;
        while (star <= row)
        {
            cout << "*";
            star++;
        }
        cout << endl;
        row++;
    }
    int r = 2;
    while (r <= n)
    {
        int col = n - r + 1;
        while (col)
        {
            cout << "*";
            col--;
        }
        int space = r - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int sp = r - 1;
        while (sp)
        {
            cout << " ";
            sp--;
        }
        int star = n - r + 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        cout << endl;
        r++;
    }
}