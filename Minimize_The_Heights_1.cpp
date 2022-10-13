class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int curmax = arr[n - 1];
        int curmin = arr[0];
        int ans = curmax - curmin;
        for (int i = 1; i < n; i++)
        {
            curmin = min(arr[0] + k, arr[i] - k);
            curmax = max(arr[i - 1] + k, arr[n - 1] - k);
            ans = min(ans, curmax - curmin);
        }
        return ans;
    }
};