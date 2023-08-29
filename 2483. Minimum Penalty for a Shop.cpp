class Solution {
public:
    int bestClosingTime(string customers) {
        
        int y=0,n=0;
        
        for(int i=0;i<customers.length();i++){
            if(customers[i]=='Y'){
                y++;
            }
        }
        int mn =INT_MAX,index,penalty; 
        for(int k=0;k<customers.length();k++){
            penalty=y+n;
               if(penalty<mn){
                mn = penalty;
                index = k;
            }
            if(customers[k]=='Y')
                y--;
            else 
                n++;
        }
        penalty = y + n;
        if(penalty<mn){
                mn = penalty;
                index = customers.size();
        }
        return index;
    }
    
};
