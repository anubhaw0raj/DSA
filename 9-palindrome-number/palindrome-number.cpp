class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long m = 0;
        if(x<0){
            return false;
        }
        while(x>0){
            int a = x%10;
            x = x/10;
            m = (m*10) + a;
        }
        if((int)m==temp){
            return true;
        }else{
            return false;
        } 
    }
};