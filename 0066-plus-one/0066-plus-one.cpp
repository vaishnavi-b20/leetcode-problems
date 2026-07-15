class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        vector<int> ans;
        int carry = 1, sum;

        while(i >= 0 || carry){
            int d;
            if(i >= 0){
                d = digits[i];
            }
            else{ d = 0; }

            sum = d + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};