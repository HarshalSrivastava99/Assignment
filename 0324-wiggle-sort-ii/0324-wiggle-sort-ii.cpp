class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        // question m yeh krna h ki pehle smaller fir greater fir smaller fir greater and so on
        vector<int>temp=nums;//temp ek new array h
        sort(temp.begin(),temp.end());//temp m sorted array hoga 
        int n=nums.size();
        int mid=(n-1)/2;//yeh array ko 2 half m divide kr dega
        int high=n-1;
        for(int i=0;i<n;i++)
        {
        if(i%2 == 0)
        {
        nums[i]=temp[mid--];//pehle yeh aayega fir else wala fir ye fir else jb tk khtm nhi hota h array
        }
        else
        {
            nums[i]=temp[high--];
        }
        }
        
    }
};