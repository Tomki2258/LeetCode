#include <map>

struct Number{
    int value;
    short count;
};

class Solution {
public:
    vector<Number> numbers;

    int isInIndex(int number){
        for(int i = 0;i < numbers.size();++i){
            if(numbers[i].value == number) return i;
        }
        return -1;
    }

    int singleNumber(vector<int>& nums) {

        for(int i = 0;i < nums.size();++i){
            int index = isInIndex(nums[i]);
            if(index != -1){
                numbers[index].count++;
            }
            else{
                numbers.push_back(
                {nums[i],1}
            );
            }
        }

        for(int i = 0 ; i < numbers.size();++i){
            if(numbers[i].count == 1) return numbers[i].value;
        }
        return 0;
    }
};