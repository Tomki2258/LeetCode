class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0;i < matrix.size();++i){
            for(int j = 0;j<matrix[i].size();++j)
            {
                int val = matrix[i][j];
                if(val == target) return true;
            }
            std::cout << "\n";
        }
        return false;
    }
};