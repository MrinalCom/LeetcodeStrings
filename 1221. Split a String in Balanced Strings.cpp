class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int res=0;
        for(auto i : s )
        {
            if(i=='L')
                ans++;
            else if(i=='R')
                ans--;
            
            if(ans == 0)
                res++;
        }
        
        return res;
        
        
        
        
    }
};

