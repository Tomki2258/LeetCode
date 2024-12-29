class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0;i < matrix.size();++i){
            if(matrix[i][matrix[i].size() / 2] == target) return true;
            else if(matrix[i][matrix[i].size() / 2] < target){
                for(int j = 0;j<matrix[i].size() / 2;++j)
                {
                    int val = matrix[i][j];
                    if(val == target) return true;
                    else if(val > target) break;
                }
            }
            for(int j = 0;j<matrix[i].size();++j)
                {
                    int val = matrix[i][j];
                    if(val == target) return true;
                    else if(val > target) break;
                }
            std::cout << "\n";
        }
        return false;
    }
};