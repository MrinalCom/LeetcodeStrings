class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        
        int arr=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int j=i;
            int count1=0,count2=0;
            for(;j<n;j++){
                if(s[j]=='0')
                    count1++;
                if(s[j]=='1')
                    break;
            }
            int k=j;
            for(;k<n;k++){
                if(s[k]=='1')
                    count2++;
                if(s[k]=='0')
                    break;
                if(count1==count2){
                arr=max(arr,(k-i+1));
                }
            }
        }
        return arr;
    }


    
};
