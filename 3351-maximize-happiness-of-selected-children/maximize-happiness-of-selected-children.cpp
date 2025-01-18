class Solution
{
    public:
        void printVector(vector<int> &happiness)
        {
            for (int i = 0; i < happiness.size(); ++i)
            {
                std::cout << happiness[i] << " ";
            }
            std::cout << "\n";
        }
    void decreaseHappines(vector<int> &happiness)
    {
        for (int i = 0; i < happiness.size(); ++i)
        {
            if (happiness[i] > 0)
                happiness[i] -= 1;
        }
    }
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        long long value = 0;
        int max = 0;
       	//printVector(happiness);
        sort(happiness.begin(), happiness.end(), greater<int> ());
        //printVector(happiness);
        for (int i = 0; i < k; ++i)
        {
           	//max = *std::max_element(happiness.begin(), happiness.end());
            if (happiness[i]- i > 0)
            {
                value += (happiness[i] - i);
                happiness[i] = -1;
            }
            else
                return value;


            //printVector(happiness);
           	//auto it = std::find(happiness.begin(),happiness.end(),max);

           	//happiness.erase(it);
        }
        //printVector(happiness);

        return value;
    }
};