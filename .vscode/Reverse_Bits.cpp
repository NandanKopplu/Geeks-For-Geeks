public:
long long reversedBits(long long X)
{
    long long ans = 0;
    for (int i = 0; i < 31; i++)
    {
        if (X & 1)
        {
            ans += 1;
        }
        ans <<= 1;
        X = X >> 1;
    }
    if (X & 1)
        ans += 1;
    return ans;
}
}
;