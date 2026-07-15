class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0, sum;
        string ans;

        while(i >= 0 || j >= 0 || carry){
            int d1, d2;
            if(i >= 0){
                d1 = num1[i] - '0';
            }
            else{
                d1 = 0;
            }
            if(j >= 0){
                d2 = num2[j] - '0';
            }
            else{
                d2 = 0;
            }
            sum = d1 + d2 + carry;
            ans += '0' + (sum % 10);
            carry = sum / 10;
            i--;
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};