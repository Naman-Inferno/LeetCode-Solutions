class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int q=0;q<nums.size();q++){
                if(target==nums[i]+nums[q] && i!=q){
                    return {i,q};
                }
            }
        }
        return {};
    }
};