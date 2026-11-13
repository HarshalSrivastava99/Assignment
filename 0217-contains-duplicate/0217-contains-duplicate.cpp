class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int initial=0,final=1;
        for(int i=0;i<nums.size()-1;i++)
        if(nums[initial]==nums[final])
        {
            return true;
        }
        else
        {
        initial++;
        final++;
        }
        return false;
    }
};