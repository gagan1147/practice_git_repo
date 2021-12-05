#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    vector<vector<int>> matrix = {{1,1},
                                  {3,2},
                                  {5,3},
                                  {4,1},
                                  {2,3},
                                  {1,4}};

    int m = matrix.size();
    int xAxis = 0,yAxis = 0;
    for(int i=0;i<m;i++){
        xAxis = max(xAxis,matrix[i][0]);
        yAxis = max(yAxis,matrix[i][1]);
    }
    cout<<xAxis<<" : "<<yAxis<<endl;
    int N = max(xAxis,yAxis);
    int newMatrix[N+1][N+1];
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            newMatrix[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++){
        newMatrix[matrix[i][0]][matrix[i][1]] = 1; 
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
           cout<<newMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int n = N-1;
    int res = 0;
    
    for(int i=0;i<N;i++){
        int count  = 0;
        for(int j=0;j<N;j++){
            if(newMatrix[i][j]){
                count++;
            }
        }
        res = max(res,count);
    }
    for(int i=0;i<N;i++){
        int count  = 0;
        for(int j=0;j<N;j++){
            if(newMatrix[j][i]){
                count++;
            }
        }
        res = max(res,count);
    }
    while(n>-N){
        int count = 0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(j-i == n){
                    if(newMatrix[i][j]){
                        count++;
                    }
                }
            }
        }
        res = max(res,count);
        n--;
    }
    n = 0;
    while(n<N*2){
        int count = 0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(j+i == n){
                    if(newMatrix[i][j]){
                        count++;
                    }
                }
            }
        }
        res = max(res,count);
        n++;
    }
    cout<<res<<endl;
    return 0;
}
