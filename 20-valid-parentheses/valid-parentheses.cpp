class Solution {
public:
    vector<char> stact;
    char getTop(){
        return stact[stact.size() - 1];
    }
    bool isEmpty(){
        if(stact.size() == 0) return true;
        return false;
    }
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']'){
            return false;
        }
        for(int i = 0;i < s.size();++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stact.push_back(s[i]);
            }
            else if(s[i] == ')'){
                                    if(isEmpty()) return false;

                if(getTop() == '('){
                    stact.pop_back();
                }
                else {
                    return false;
                }
            }
            else if(s[i] == '}'){
                if(isEmpty()) return false;
                if(getTop() == '{'){
                
                    stact.pop_back();
                }
                else {
                    return false;
                }
            }
            else if(s[i] == ']'){
                                    if(isEmpty()) return false;

                if(getTop() == '['){
                    stact.pop_back();
                }
                else {
                    return false;
                }
            }
        }
        

        if(stact.size() == 0) return true;
        return false;
    }
};