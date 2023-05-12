class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(map.find(difference) != map.end()){
                return {map[difference], i};
            }
            map[nums[i]] = i;
        }
 
        return {};
    }
};
