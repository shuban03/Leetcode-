class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        int m=grid.size();        //No of rows
        int n=grid[0].size();     //No of columns
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    perimeter+=4;
                    if(j>0 && grid[i][j-1]==1){       //check behind
                        perimeter-=2;
                    }
                    if(i>0 && grid[i-1][j]==1){       //check above
                        perimeter-=2;
                    }
                }
            }
        }
        return perimeter;
    }
};