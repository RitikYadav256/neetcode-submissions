class Solution {
public:
     
     
     void solve(int i,int j,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
       if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0'){
           return;
       }

        
         grid[i][j]='0';
         solve(i,j+1,grid);
         solve(i+1,j,grid);
         solve(i,j-1,grid);
         solve(i-1,j,grid);
     }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    solve(i,j,grid);
                    
                }
            }
        }

        return count;
    }
};
