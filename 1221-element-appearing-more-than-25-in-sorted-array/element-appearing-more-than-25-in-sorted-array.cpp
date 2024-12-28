class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        std::map<int,short> values;

        for(int i = 0 ; i < arr.size();++i){

            if (values.find(arr[i]) != values.end()) {
                values[arr[i]]++;
            }
            values.insert({arr[i],1});
        }

        for (auto& i : values) {
            float value = static_cast<float>(i.second) / arr.size(); 
            if (value > 0.25f) {
                return i.first;
            }
        }
        return 0;
    }
};