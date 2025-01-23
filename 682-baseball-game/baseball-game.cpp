class Solution
{
    public:
        int isNumber(char sign)
        {
            return sign;
        }
    int calPoints(vector<string> &operations)
    {
        vector<int> scores;
        for (int i = 0; i < operations.size(); ++i)
        {
            std::cout << operations[i] << "\n";
            if(operations[i][0] == '+'){
                int a = scores[scores.size() - 1];
                int b = scores[scores.size() - 2];
                scores.push_back(a+b);
            }else if(operations[i][0] == 'D'){
                int last = scores[scores.size() - 1];
                scores.push_back(last * 2);
            }else if(operations[i][0] == 'C'){
                scores.pop_back();
            }
            else{
                int value = stoi(operations[i]);
                scores.push_back(value);
            }
        }
        int result = 0;
        for(int i = 0;i < scores.size();++i){
            result += scores[i];
        }
        return result;
    }
};