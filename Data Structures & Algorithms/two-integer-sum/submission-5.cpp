class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       /* so we will try something other approach
        we will save in the map all the values and look for n-x in the map or not. if it exists then we return the index.
        so in the map we will be saving the number and the index as well.
        */
        unordered_map<int, int> numsMap;
        for(int i=0; i<nums.size(); i++){
            int complement = target-nums[i];
            //now look for complement in map
            if (numsMap.find(complement) != numsMap.end()) {
                return {numsMap[complement], i};
            }
            //store the number
             numsMap[nums[i]] = i;
        }
        
        
        return {};
    }
};
