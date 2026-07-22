class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> arr;
        vector<int> freq(256, 0);
        string ans;

        for(char c : s){
            freq[c]++;
        }

        for(int i = 0; i < 256; i++){
            if(freq[i] > 0){
                arr.push_back({freq[i], char(i)});
            }
        }
        sort(arr.begin(), arr.end(), greater<pair<int, char>>());

        for(auto it : arr){
            for(int i = 0; i < it.first; i++){
                ans += it.second;
            }
        }
        return ans;
    }
};