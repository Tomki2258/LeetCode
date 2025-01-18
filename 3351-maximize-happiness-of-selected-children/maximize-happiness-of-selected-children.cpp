class Solution
{
    public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
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