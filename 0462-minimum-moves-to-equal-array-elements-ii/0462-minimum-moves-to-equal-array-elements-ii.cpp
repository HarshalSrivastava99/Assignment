class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),count=0,median=nums[n/2];
        for(int i=0;i<n;i++)
        {
            count = count + abs(nums[i]-median);// abs means to consider all negative value as positive values
        }
        return count;
        
    }
};