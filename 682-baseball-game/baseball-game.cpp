class Solution
{
    public:
    int calPoints(vector<string> &operations)
    {
        vector<int> scores;
        for (int i = 0; i < operations.size(); ++i)
        {
            if(operations[i][0] == '+'){
                scores.push_back(scores[scores.size() - 1]+scores[scores.size() - 2]);
            }else if(operations[i][0] == 'D'){
                scores.push_back(scores[scores.size() - 1] * 2);
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