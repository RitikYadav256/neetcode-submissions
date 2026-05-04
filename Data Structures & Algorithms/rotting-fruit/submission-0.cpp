#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0;  // Count of fresh oranges

        // Step 1: Push all initially rotten oranges into queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        // If no fresh oranges
        if (fresh == 0) return 0;

        // Directions for 4 neighbors
        vector<pair<int,int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        int minutes = -1;  // Start from -1 because first level is already rotten

        // Step 2: BFS traversal
        while (!q.empty()) {
            int size = q.size();
            minutes++;
            while (size--) {
                auto [x, y] = q.front();
                q.pop();

                for (auto [dx, dy] : dirs) {
                    int nx = x + dx;
                    int ny = y + dy;

                    // Infect fresh orange
                    if (nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;  // Becomes rotten
                        q.push({nx, ny});
                        fresh--;
                    }
                }
            }
        }

       
        return fresh == 0 ? minutes : -1;
    }
};
