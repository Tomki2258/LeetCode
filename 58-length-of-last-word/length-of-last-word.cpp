class Solution {
public:
    int lengthOfLastWord(string s) {
        char lastChar = ' ';
        string lastWord = "";
        for(int i = 0; i < s.size();++i)
        {
            if(lastChar == ' ' && s[i] != ' '){
                lastWord = "";
                lastWord += s[i];
            }
            else if(lastChar != ' ' && s[i] != ' '){
                lastWord += s[i];
            }

            lastChar = s[i];
        }
        return lastWord.size();
    }
};