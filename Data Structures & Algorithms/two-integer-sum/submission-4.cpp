class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> numsMap;
        vector<int> result;
        numsMap[target-nums[0]]=0;
        for (int i=1;i<nums.size();i++){
            int val = target-nums[i];
            auto it = numsMap.find(nums[i]);
            if(it != numsMap.end())
            return{numsMap[nums[i]],i};
            numsMap[val]=i;
        }
        
        return result;
    }
};
