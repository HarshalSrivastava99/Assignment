class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1, max_area = 0;
        while(start<end)
        {
            int width = end - start;
            int min_height = min(height[start],height[end]);
            int curr_area = width * min_height;
            max_area = max(curr_area, max_area);
            height[start] < height[end] ? start++ : end--;
        }
        return max_area;
    }
};