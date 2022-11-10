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
        while (col <= n)
        {
            if ((col == 1 || col == n) || (row == 1 || row == n))
            {
                cout << "*";
                col++;
            }
            else
            {
                cout << " ";
                col++;
            }
        }
        row++;
        cout << endl;
    }
}