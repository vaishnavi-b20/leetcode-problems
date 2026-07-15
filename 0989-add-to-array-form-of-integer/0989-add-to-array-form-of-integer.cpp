class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1;
        int carry = 0, sum;
        vector<int> ans;

        while(i >= 0|| k > 0 || carry){
            int d1, d2;
            if( i>= 0){
                d1 = num[i];
            }
            else{ d1 = 0; }
            d2 = k % 10;

            sum = d1 + d2 + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            k = k / 10;
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};