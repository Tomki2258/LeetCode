class Solution
{
    public:
        int finalPositionOfSnake(int n, vector<string> &commands)
        {
            vector<int> values(n *n);
            int currentValue = 0;
            for (int i = 0; i < commands.size(); ++i)
            {
                if (commands[i] == "UP")
                {
                    currentValue -= n;
                }
                else if(commands[i] == "DOWN")
                {
                    currentValue += n;
                }
                else if(commands[i] == "RIGHT")
                {
                    currentValue++;
                }
                else {
                    currentValue--;
                }
            }
            return currentValue;
        }
};