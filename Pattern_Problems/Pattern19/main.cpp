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
        int col = n - row + 1;
        while (col)
        {
            cout << "*";
            col--;
        }
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int sp = row - 1;
        while (sp)
        {
            cout << " ";
            sp--;
        }
        int star = n - row + 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        cout << endl;
        row++;
    }
    int r = 1;
    while (r <= n)
    {
        int co = 1;
        while (co <= r)
        {
            cout << "*";
            co++;
        }
        int spa = n - r;
        while (spa)
        {
            cout << " ";
            spa--;
        }
        int s = n - r;
        while (s)
        {
            cout << " ";
            s--;
        }
        int sta = 1;
        while (sta <= r)
        {
            cout << "*";
            sta++;
        }
        cout << endl;
        r++;
    }
}