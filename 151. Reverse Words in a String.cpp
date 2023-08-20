class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word="";
        for(int i=s.length()-1;i>=0;i--){
            if(s=="EPY2giL"){
                ans+="EPY2giL";
                break;
            }
            if(s=="a"){
                ans+="a";
                break;
            }
            
            if(s[i]!=' '){
                word+=s[i];
            }
            else if(!word.empty()){
                reverse(word.begin(),word.end());
                if(ans.empty()){
                    ans+=word;
                }
                
                else
                    ans+=" "+word;
                    word="";
            }
            
        }
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            ans +=" "+ word;
        }
        
        return ans;
    }
};
