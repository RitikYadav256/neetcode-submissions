class Solution:
    
    def numIslands(self, grid: List[List[str]]) -> int:
            if not grid:
                return 0

            cols=len(grid[0])
            rows=len(grid)
            count=0

            def countIs(i,j):
                    if i<0 or j<0 or i>rows-1 or j>cols-1 or grid[i][j]=="0":
                        return
                    
                    grid[i][j]="0"

                    countIs(i+1,j)
                    countIs(i,j+1)
                    countIs(i-1,j)
                    countIs(i,j-1)

            for a in range(rows):
                for b in range(cols):
                    if grid[a][b]=="1":
                        count=count+1
                        countIs(a,b)


            return count

