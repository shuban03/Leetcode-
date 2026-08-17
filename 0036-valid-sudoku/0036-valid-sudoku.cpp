class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //initialization
        bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool boxes[9][9]={false};

        //iteration
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'1';
                    int box_indx=((i/3)*3)+(j/3);

                    if(rows[i][num]||cols[j][num]||boxes[box_indx][num])  //if number already present in row column or box
                        return false;
                    rows[i][num]=cols[j][num]=boxes[box_indx][num]=true;  //if not mark true
                }
            }
        }
        return true;
    }
};