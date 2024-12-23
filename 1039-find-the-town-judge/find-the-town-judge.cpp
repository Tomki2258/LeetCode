class Solution {
public:
    struct person{
        short a = 0;              //ilu osobom ufa
        short b = 0;              //ile osob ufa
    };
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<person> persons(n);
        for(int i = 0 ;i < trust.size();++i)
        {
            short a = trust[i][0] - 1;
            short b = trust[i][1] - 1;
            persons[a].a++;
            persons[b].b++;
        }

        for(int i = 0 ; i < persons.size();++i)
        {
            std::cout << persons[i].a << " " << persons[i].b << "\n";
        
            short a = persons[i].a;
            short b = persons[i].b;

            if(a == 0 && b == n - 1)
            {
                return i + 1;
            }
        }

        return -1;
    }
};