class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_global=nums[0];
        int curr_sum=0;
        for(int x:nums){
            curr_sum=max(curr_sum + x,x);
            max_global=max(max_global,curr_sum);   
        }
     return max_global;   
    }
};