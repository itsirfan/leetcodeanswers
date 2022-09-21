class Solution {
public:
    bool isPalindrome(int x) {
   long long reverse=0;
    if(x<0) return 0;
    long long temp=x;
    while(x)
    {
        reverse=reverse*10 + x%10;
        x/=10;
    }
    return temp==reverse;
        
    }
};