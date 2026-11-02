class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum=0;
        //pehli window ka sum nikalna h
        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }
        int maxsum=sum;
        //sliding window use krna h
        for(int i=k;i<nums.size();i++)
        {
            sum=sum-nums[i-k]+nums[i];
            maxsum=max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};