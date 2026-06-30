class Solution {
   public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        int ans = 0;

        vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                queue<pair<int, int>> q;

                if (grid[i][j] == '1' && !visited[i][j]) {
                    visited[i][j] = true;
                    q.push({i, j});
                    ans++;

                    while (!q.empty()) {
                        auto [r, c] = q.front();

                        for (auto [dr, dc] : dir) {
                            int fr = r + dr;
                            int fc = c + dc;
                            if (fr >= 0 && fr < rows && fc >= 0 && fc < cols &&
                                grid[fr][fc] == '1' && !visited[fr][fc]) {
                                visited[fr][fc] = true;
                                q.push({fr, fc});
                            }
                        }
                        q.pop();
                    }
                }
            }
        }
        return ans;
    }
};
