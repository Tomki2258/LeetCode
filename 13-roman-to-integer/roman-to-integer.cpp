class Solution {
public:
    int detectChar(char c){
        switch(c){
            case 'I':
                return 1;
            break;
            case 'V':
                return 5;
            break;
            case 'X':
                return 10;
            break;
            case 'L':
                return 50;
            break;
            case 'C':
                return 100;
            break;
            case 'D':
                return 500;
            break;
            case 'M':
                return 1000;
            break;
        }
        return 0;
    }
    int romanToInt(string s) {
        int result = 0;
        int lastDigit = 0;
        int stringSize = s.size();
        for(int i = 0 ;i < stringSize ;i++){
            char currentChar = s[i];
            int charValue = detectChar(currentChar);
            if (i + 1 < stringSize && charValue < detectChar(s[i + 1])) {
            result -= charValue;
            }
            else 
            {
                result += charValue;
            }
        } 
        return result;
    }
};