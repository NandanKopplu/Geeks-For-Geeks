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
        if (row % 2 == 0)
        {
            int c = 0;
            int col = 1;
            while (col <= row)
            {
                cout << c << " ";
                if (c == 0)
                {
                    c = 1;
                }
                else
                {
                    c = 0;
                }
                col++;
            }
        }
        else
        {
            int c = 1;
            int col = 1;
            while (col <= row)
            {
                cout << c << " ";
                if (c == 0)
                {
                    c = 1;
                }
                else
                {
                    c = 0;
                }
                col++;
            }
        }
        cout << endl;
        row++;
    }
}