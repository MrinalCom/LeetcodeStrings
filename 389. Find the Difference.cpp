class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        int n=s.length();
        int m=t.length();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum1=sum1+s[i];
        }
        for(int i=0;i<m;i++){
            sum2=sum2+t[i];
        }
        int diff=abs(sum2-sum1);
        char c=(int)diff;
        return c;
            
        
    }
};
