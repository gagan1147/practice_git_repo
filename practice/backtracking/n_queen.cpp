#include<iostream>

using namespace std;

const int N = 16;
int arr[N][N];


bool isSafe(int row,int col){
    for(int i=0;i<col;i++){
        if(arr[row][i] == 1){
            return false;
        }
    }
    for(int i=row,j=col;i>-1 && j>-1;j--,i--){
        if(arr[i][j] == 1){
            return false;
        }       
    }
    for(int i=row,j=col;i<N && j>-1;j--,i++){
        if(arr[i][j] == 1){
            return false;
        }       
    }
    return true;
}


bool solve_nqueen(int n){
    if(n==N){
        return true;
    }
    for(int i=0;i<N;i++){
        if(isSafe(i,n)){
            arr[i][n] = 1;
            if(solve_nqueen(n+1)){
                return true;
            }
            arr[i][n] = 0;
        }
    }
    return false;
}






int main(int argc, char const *argv[])
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[i][j] = 0;
        }
    } 
    cout<<solve_nqueen(0);
    return 0;
}
