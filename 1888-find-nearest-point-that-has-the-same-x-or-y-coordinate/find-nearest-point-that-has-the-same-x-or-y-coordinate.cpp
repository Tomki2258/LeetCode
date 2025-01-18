class Solution
{
    public:
        int nearestValidPoint(int x, int y, vector<vector < int>> &points)
        {
            int nearestIndex = -1;
            short nearestDistance = 32767;
            for (int i = 0; i < points.size(); ++i)
            {
                if (points[i][0] == x || points[i][1] == y)
                {
                    short distance = abs(x - points[i][0]) + abs(y - points[i][1]);
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