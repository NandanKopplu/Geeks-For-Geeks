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
        int star = row;
        while (star)
        {
            cout << "* ";
            star--;
        }
        cout << endl;
        row++;
    }
    int r = 1;
    while (r <= n)
    {
        int spac = r - 1;
        while (spac)
        {
            cout << " ";
            spac--;
        }
        int start = n - r + 1;
        while (start)
        {
            cout << "* ";
            start--;
        }
        cout << endl;
        r++;
    }
}