class Solution {
public:
    double average(vector<int>& salary) {
        double average = 0;
        int max = *std::max_element(salary.begin(), salary.end());
        int min = *std::min_element(salary.begin(), salary.end());
        
        for(int i = 0;i < salary.size();++i){
            if(salary[i] != max && salary[i] != min){
                std::cout << salary[i] << " ";
                average += salary[i];
            }
        }

        return average / (salary.size() - 2);
    }
};