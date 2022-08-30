//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        long long int l = 0, r = n - 1, area = 0;
        int lmax = 0, rmax = 0;
        while (l < r)
        {
            lmax = max(lmax, arr[l]);
            rmax = max(rmax, arr[r]);
            if (lmax < rmax)
            {
                area += lmax - arr[l];
                l = l + 1;
            }
            else
            {
                area += rmax - arr[r];
                r = r - 1;
            }
        }
        return area;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends