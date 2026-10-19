class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int m = matrix.size(), n = matrix[0].size();
        vector<int> height(n, 0), left(n, 0), right(n, n);
        int maxArea = 0;

        for (int i = 0; i < m; i++) {
            int curLeft = 0, curRight = n;
            // update height
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') height[j]++;
                else height[j] = 0;
            }
            // update left
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') left[j] = max(left[j], curLeft);
                else { left[j] = 0; curLeft = j + 1; }
            }
            // update right
            for (int j = n - 1; j >= 0; j--) {
                if (matrix[i][j] == '1') right[j] = min(right[j], curRight);
                else { right[j] = n; curRight = j; }
            }
            // update area
            for (int j = 0; j < n; j++) {
                maxArea = max(maxArea, (right[j] - left[j]) * height[j]);
            }
        }
        return maxArea;
    }
};
