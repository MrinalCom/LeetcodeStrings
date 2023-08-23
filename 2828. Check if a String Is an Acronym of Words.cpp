class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        for(int i=0;i<words.size();i++)
        {
            if(words.size()!=s.length()){
                return false;
            }
            if(words[i][0]!=s[i]){
                return false;
            }
            
        }
        return true;
    }
};
