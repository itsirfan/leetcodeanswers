class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++)
        {
          int x= pow(2,i);
            if(x==n)
            {
                return true;
            
            }
        
        } return false;
    }
};