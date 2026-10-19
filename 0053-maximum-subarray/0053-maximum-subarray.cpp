class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int sum=0;
        int maxSum=-1;
        for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                if(sum<0){
                    sum=0;
                }else{
                    if(sum>maxSum){
                        maxSum=sum;
                    }
                }

        }
        if(maxSum>=0){
            return maxSum;
        }else{
            int mx = *max_element(nums.begin(), nums.end());
            return mx;
        }
    }
};