class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i = 0; i< s.size(); i++){
            vector<int> freq(26, 0);
            for(int j = i; j< s.size(); j++){
                freq[s[j] - 'a']++;

                int maxi = 0, mini = INT_MAX;
                for(int i = 0; i < 26; i++){
                    if(freq[i] > 0){
                        maxi = max(maxi, freq[i]);
                        mini = min(mini, freq[i]);
                    }
                }
                sum += maxi - mini;
            }
        }
        return sum;
    }
};