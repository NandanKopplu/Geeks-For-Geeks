class Solution
{
public:
    string armstrongNumber(int n)
    {
        int x = n % 10;
        int y = (n / 10) % 10;
        int z = n / 100;
        if (x * x * x + y * y * y + z * z * z == n)
            return "Yes";
        else
            return "No";
    }
};