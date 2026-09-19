class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int current=1,answer=1;
        for(int i=1;i<n;i++)
        {
         if(nums[i]>nums[i-1])
         {
         current++;
         }
         else
         {
         current=1;
         }
        
        answer=max(answer,current);
        }
        return answer;
        
    }
};