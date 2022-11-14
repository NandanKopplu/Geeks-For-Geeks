class Solution
{
public:
    int isPalindrome(string S)
    {
        int n = S.length();
        int start = 0;
        int end = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (S[start] == S[end])
            {
                start++;
                end--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};