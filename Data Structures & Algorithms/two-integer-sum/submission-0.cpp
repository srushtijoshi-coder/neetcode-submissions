class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>map;
        vector<int>indices(2);

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(map.find(complement) != map.end()){
                indices[0]= map[complement];
                indices[1]=i;
                return indices;
            }
            else{
                map[nums[i]]=i;
            }

        }

        return indices;


        
    }
};
