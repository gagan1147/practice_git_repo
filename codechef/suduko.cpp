#include<bits/stdc++.h>

using namespace std;

char alphaNum[9] = {'1','2','3','4','5','6','7','8','9'};

bool isSafe(int i,int j,int n,int N,vector<vector<char>> &grid){
    for(int row = 0;row<N;row++){
        if(grid[i][row] == alphaNum[n] || grid[row][j] == alphaNum[n]){
            return false;
        }
    }
    int s = sqrt(N);
    int rs = i - i%s;
    int cs = j - j%s;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(grid[i+rs][j+cs]==alphaNum[n]){
                return false;
            }
        }
    }
    return true;
}
bool solve(int N,vector<vector<char>> &grid){
    
    int i,j,bre=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(grid[i][j] == '.'){
                bre=1;
                break;
            }
        }
        if(bre){
            break;
        }
    }
    if(i==N && j == N){
        return true;
    }
    for(int n=0;n<9;n++){
        if(isSafe(i,j,n,N,grid)){
            grid[i][j] = alphaNum[n];
            if(solve(N,grid)){
                return true;
            }
            grid[i][j] = '.';
        }
    }
    return false;
    
}

void solveSudoku(vector<vector<char>> &board) {
    int N = board[0].size();
    solve(N,board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[]){
    vector<vector<char>> grid =  {{'5','3','.','.','7','.','.','.','.'},
                              {'6','.','.','1','9','5','.','.','.'},
                              {'.','9','8','.','.','.','.','6','.'},
                              {'8','.','.','.','6','.','.','.','3'},
                              {'4','.','.','8','.','3','.','.','1'},
                              {'7','.','.','.','2','.','.','.','6'},
                              {'.','6','.','.','.','.','2','8','.'},
                              {'.','.','.','4','1','9','.','.','5'},
                              {'.','.','.','.','8','.','.','7','9'}};
    solveSudoku(grid);

    return 0;
}
