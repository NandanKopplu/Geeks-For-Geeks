
class Solution
{
public:
    string is_palindrome(int n)
    {
        string num = to_string(n);
        int start = 0;
        int size = num.size();
        int end = size - 1;
        while (start <= end)
        {
            if (num[start] != num[end])
            {
                return "No";
            }
            start++;
            end--;
        }
        return "Yes";
    }
};