class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0,n=nums.size();
        int max_element=nums[0];

        for(int i=0;i<n;i++)
        {
        sum=sum+nums[i];
        max_element=max(max_element,sum);
        if(sum<0)
        {
        sum=0;
        }
        }
        return max_element;
    }
};