class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int n = word1.length();
        int m = word2.length();
        int minLength = min(n, m);
        string merged;

        for (int i = 0; i < minLength; i++) {
            merged += word1[i];
            merged += word2[i];
        }

    
        for (int i = minLength; i < n; i++) {
            merged += word1[i];
        }

        
        for (int i = minLength; i < m; i++) {
            merged += word2[i];
        }

        return merged;
    }
};
