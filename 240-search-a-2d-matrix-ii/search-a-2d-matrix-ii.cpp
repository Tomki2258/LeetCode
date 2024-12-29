class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {
            int rowSize = matrix.size();
            for (short i = 0; i < rowSize; ++i)
            {
                if (matrix[i][matrix[i].size() / 2] == target) return true;
                
                int columnSize = matrix[i].size();
                for (short j = 0; j < columnSize; ++j)
                {
                    if (matrix[i][j] == target) return true;
                    else if (matrix[i][j] > target) break;
                }
            }
            return false;
        }
};