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
    while (r < n)
    {
        int start = n - r;
        while (start)
        {
            cout << "* ";
            start--;
        }
        cout << endl;
        r++;
    }
}