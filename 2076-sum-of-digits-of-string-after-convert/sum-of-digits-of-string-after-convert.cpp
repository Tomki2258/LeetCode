class Solution {
public:
    int getLucky(string s, int k) {
        string conv = "";
        short index = 1;
        for(int i = s.size() - 1;i >= 0 ;--i)
        {
            int value = (s[i] - 96);
            conv.append(to_string(value));
        }

        int result = 0;

        for(int i = 0;i < conv.size();++i)
        {
            result += (int)conv[i]-48;
        }

        if(k == 1) return result;
        int sum = 0;
        while (k > 1) {
            int sum = 0;
            while (result > 0) {
                sum += result % 10;
                result /= 10;
            }
            result = sum;
            --k;
        }

        return result;
 

        return sum;
    }
};