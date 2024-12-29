class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {
            for (short i = 0; i < matrix.size(); ++i)
            {
                if (matrix[i][matrix[i].size() / 2] == target) return true;

                for (short j = 0; j < matrix[i].size(); ++j)
                {
                    if (matrix[i][j] == target) return true;
                    else if (matrix[i][j] > target) break;
                }
            }
            return false;
        }
};