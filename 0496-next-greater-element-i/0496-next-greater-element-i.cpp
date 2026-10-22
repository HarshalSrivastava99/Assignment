class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>next;

        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top() <=nums2[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                next.push_back(-1);

            }
            else
            {
                next.push_back(st.top());
            }
                st.push(nums2[i]);
        }
             reverse(next.begin(),next.end());
            vector<int>ans;
            for(int i=0;i<nums1.size();i++)
            {
                for(int j=0;j<nums2.size();j++)
                {
                    if(nums1[i]==nums2[j])
                    {
                        ans.push_back(next[j]);
                        break;
                    }
                }
            }
        return ans;
        
    }
};