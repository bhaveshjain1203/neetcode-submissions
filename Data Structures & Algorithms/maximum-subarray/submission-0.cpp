class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxAns = nums[0];
        int curSum = 0;
        for(int num : nums){
            if(curSum<0) curSum =0;
            curSum += num;
            if(maxAns< curSum) maxAns = curSum; 
        }
        return maxAns;

    }
};
