class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int p=x;
        long rev=0;
        int digit;
        while(x>0){
         digit = x%10;
         x = x/10;
         rev = rev*10 +digit;
        }
        if(rev == p)
        return true;
        else
        return false;
    }
};