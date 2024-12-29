class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0;i < details.size();++i){
            int result = (details[i][11] - 48) * 10 + (details[i][12] - 48);
            if(result > 60) count++;
        }
        return count;
    }
};