class Solution {
public:
    bool isNumeric(char c) {
        return (c >= '0' && c <= '9');
    }

    bool isPalindrome(string s) {
        if(s.size() == 1) return true;

        for(int i = 0; i < s.size(); ++i) {
            if(!isNumeric(s[i]) && (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')) {
                s[i] = 0;
            }
        }
        
        s.erase(std::remove(s.begin(), s.end(), '\0'), s.end());

        for(int i = 0; i < s.size() / 2; ++i) {
            if(toupper(s[i]) != toupper(s[s.size() - 1 - i])) {
                return false;
            }
        }

        std::cout << s << "\n";
        return true;
    }
};
