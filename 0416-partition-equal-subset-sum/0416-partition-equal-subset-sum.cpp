class Solution {
public:
    bool check(int ind, int sum, vector<int>& nums, int target, vector<vector<int>>& dp){
        if( sum == target) return true;
        if(ind == nums.size() || sum > target) return false;

        if (dp[ind][sum] != -1)
            return dp[ind][sum];

        if(check(ind + 1, sum + nums[ind], nums, target, dp)){
            return dp[ind][sum] = true;
        }
        if(check(ind + 1, sum ,nums, target, dp)){
            return dp[ind][sum] = true;
        }
        return dp[ind][sum] = false;
    }
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for(int x: nums){
            total += x;
        }
        if(total % 2 != 0){
            return false;
        }
        int target = total / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));
        return check( 0, 0, nums, target, dp);
    }
};