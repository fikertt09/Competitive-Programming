class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> indices;
        sort(nums.begin(),nums.end());

        for(int i=0;i<(int)nums.size();i++)
        {
            if(nums[i]==target) 
            {
                indices.push_back(i);
                continue;
            }
            else if(nums[i]>target) break;
            
        }
        return indices;
    }
};
