class Solution {
public:
    bool checkValid(vector<vector<char>>&board, int r, int c , char k){
        for(int i=0 ; i<9 ; i++){
            if(board[i][c]==k && i!=r) return false ; 
        }
        for(int i=0 ; i<9 ; i++){
            if(board[r][i]==k && i!=c) return false ; 
        }
        int tr=r/3*3 , tc = c/3*3 ; 
        for(int i=tr ; i<tr+3; i++){
            for(int j=tc ; j<tc+3 ; j++){
                if(board[i][j]==k && !(i==r && j==c)){ 
                    return false; 
                }
            }
        }
        return true ; 
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0 ; i<9 ; i++){
            for(int j=0 ; j<9 ; j++){
                if(board[i][j]!='.'){
                    if(!checkValid(board, i, j , board[i][j])){
                        return false; 
                    }
                }
            }
        }
        return true ; 
    }
};