class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int n, int m, int baseColor, int newColor){
        if(r<0 or c<0 or r>=n or c>=m or image[r][c] == newColor or image[r][c] != baseColor)
            return;
        image[r][c] = newColor;
        dfs(image, r+1, c, n, m, baseColor, newColor);
        dfs(image, r, c+1, n, m, baseColor, newColor);
        dfs(image, r-1, c, n, m, baseColor, newColor);
        dfs(image, r, c-1, n, m, baseColor, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        dfs(image, sr, sc, n, m, image[sr][sc], newColor);
        return image;
    }
};
/*
- tried dfs recursive solution in this question 
*/