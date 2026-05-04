#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m, n;

    bool dfs(int i, int j, vector<vector<int>>& heights,
             vector<vector<int>>& vis, bool& pacific, bool& atlantic) {
        // Out of bounds -> ocean reached
        if (i < 0 || j < 0) pacific = true;
        if (i >= m || j >= n) atlantic = true;

        // Stop if both oceans reached
        if (pacific && atlantic) return true;

        // Out of grid range
        if (i < 0 || j < 0 || i >= m || j >= n) return false;

        vis[i][j] = 1;

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        for (auto& d : dirs) {
            int x = i + d[0];
            int y = j + d[1];
            // Flow only to equal or lower height cells and not yet visited
            if (x >= 0 && y >= 0 && x < m && y < n && !vis[x][y] &&
                heights[x][y] <= heights[i][j]) {
                dfs(x, y, heights, vis, pacific, atlantic);
            } else {
                // even if it goes outside, ocean flags get updated
                if (x < 0 || y < 0) pacific = true;
                if (x >= m || y >= n) atlantic = true;
            }
        }
        return pacific && atlantic;
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        vector<vector<int>> ans;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                bool pacific = false, atlantic = false;
                vector<vector<int>> vis(m, vector<int>(n, 0));
                if (dfs(i, j, heights, vis, pacific, atlantic))
                    ans.push_back({i, j});
            }
        }
        return ans;
    }
};
