class Solution
{
    public:
        int nearestValidPoint(int x, int y, vector<vector < int>> &points)
        {
            int nearestIndex = -1;
            int nearestDistance = INT_MAX;
            for (int i = 0; i < points.size(); ++i)
            {
                if (points[i][0] == x || points[i][1] == y)
                {
                    std::cout << points[i][0] << " " << points[i][1] << "\n";
                    int distance = abs(x - points[i][0]) + abs(y - points[i][1]);
                    std::cout << distance << "\n";
                    if (distance < nearestDistance)
                    {
                        nearestIndex = i;
                        nearestDistance = distance;
                    }
                }
            }
            return nearestIndex;
        }
};