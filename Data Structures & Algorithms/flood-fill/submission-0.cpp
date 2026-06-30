class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int match) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size()) {
            return;
        }

        if (image[sr][sc] != match) {
            return;
        }

        image[sr][sc] = color;

        dfs(image, sr+1,sc,color,match);
        dfs(image, sr-1,sc,color,match);
        dfs(image, sr,sc+1,color,match);
        dfs(image, sr,sc-1,color,match);
    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int match = image[sr][sc];
        if (match == color) return image;
        dfs(image,sr,sc,color,match);
        return image;
    }
};