class Solution {
public:
    string multiply(string num1, string num2) {
      
    int m = num1.length(), n = num2.length();
    string res(m + n, '0');
    
    for (int i = m - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = n - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0') + carry + (res[i + j + 1] - '0');
            carry = product / 10;
            res[i + j + 1] = (product % 10) + '0';
        }
        res[i] += carry;
    }
    
    size_t startpos = res.find_first_not_of("0");
    if (startpos != string::npos) {
        return res.substr(startpos);
    }
    return "0";
}
       
};
    

