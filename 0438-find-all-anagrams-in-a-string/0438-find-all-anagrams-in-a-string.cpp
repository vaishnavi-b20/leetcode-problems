class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> sfreq(26,0);
        vector<int> pfreq(26,0);
        vector<int> ans;

        for(char c : p){
            pfreq[c - 'a']++;
        }
        int left = 0;
        for(int right = 0; right < s.size(); right++){
            sfreq[s[right] - 'a']++;

            if(right - left + 1 > p.size()){
                sfreq[s[left] -'a']--;
                left++;
            }
            if(right - left + 1 == p.size()){
                if(sfreq == pfreq){
                    ans.push_back(left);
                }
            }
        }
        return ans;
    }
};