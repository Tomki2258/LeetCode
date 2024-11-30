class Solution {
public:

    long reverseDigits(int x){
        long reverse = 0;
        while(x > 0){
            reverse = reverse * 10 + x % 10;
            x = x / 10;
        }
        return reverse;
    }
    bool isPalindrome(int x) {
        if(x == reverseDigits(x)){
            return true;
        }
        return false;
    }
};