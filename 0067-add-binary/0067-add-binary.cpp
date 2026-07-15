class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0, sum;
        string ans;

        while(i >= 0 || j>= 0 || carry){
            int d1, d2;
            if(i >= 0){
                d1 = a[i] - '0';
            }
            else{ d1 = 0; }
            if(j >= 0){
                d2 = b[j] - '0';
            }
            else{ d2 = 0; }
            sum = d1 + d2 + carry;
            ans +='0' + (sum % 2);
            carry = sum / 2;
            i--, j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};