class Solution
{
    public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        long long value = 0;
        sort(happiness.begin(), happiness.end(), greater<int> ());
        for (int i = 0; i < k; ++i)
        {
            if (happiness[i]- i > 0)
            {
                value += (happiness[i] - i);
            }
            else
                return value;
        }

        return value;
    }
};