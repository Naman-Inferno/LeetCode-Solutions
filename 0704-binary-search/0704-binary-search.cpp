class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int m=(left+right)/2;
        while(left<=right){
            if(nums[m]==target){
                return m;
            }
            if(nums[m]<target){
                left=m+1;
                m=(left+right)/2;
            }
            if(nums[m]>target){
                right=m-1;
                m=(left+right)/2;
            }
        }
        return -1;
    }
};