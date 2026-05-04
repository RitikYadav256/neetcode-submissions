class Solution {
public:
    int find(int i,int j,vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0){
            return 0;
        }

        grid[i][j]=0;
        int area=1;
        area+=find(i,j+1,grid);
        area+=find(i+1,j,grid);
        area+=find(i-1,j,grid);
        area+=find(i,j-1,grid);

        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxArea=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int area=find(i,j,grid);
                    maxArea=max(maxArea,area);
                }
            }
        }
        return maxArea;
    }
};
