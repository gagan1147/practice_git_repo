#include<iostream>

using namespace std;
const int SIZE = 4;
int maze[SIZE][SIZE] = {{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
bool isSafe(int m,int n){
    return m<SIZE && n<SIZE && maze[m][n] == 1;
}
bool solve(int m,int n){
    
    if (m==SIZE-1 && n==SIZE-1){
        return true;
    }
    if(isSafe(m,n)){
        if(solve(m+1,n)){
            return true;
        }
        else if(solve(m,n+1)){
            return true;
        }
    }
    return false;
    
}

int main(){

    cout<<solve(0,0);

}