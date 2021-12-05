#include<bits/stdc++.h>

using namespace std;
int maxCount(int m, int n, vector<vector<int>>& ops) {
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrix[i][j] = 0;
        }
    }
    int xAxis = ops.size();
    if(xAxis != 0){
        int yAxis = ops[0].size();
        if(yAxis  != 0){
            for(int i=0;i<xAxis;i++){
                int x = ops[i][0],y = ops[i][1];
                for(int ix = 0;ix<x;ix++){
                    for(int iy = 0;iy<y;iy++){
                        matrix[ix][iy]++;
                    }   
                }   
            }
        }
    }
    
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<< matrix[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }
    int mx = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mx = max(mx,matrix[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                if(mx == matrix[i][j]){
                    count++;
                }     
        }
    }
    return count;
    //return 0;
}

int main(int argc, char const *argv[]){
    
    vector<vector<int>> ops = {};

    int m = 3,n=3;
    cout<<maxCount(m,n,ops);
    int xAxis = ops.size();
    int yAxis = ops.size();
    cout<<xAxis<<" "<<yAxis<<endl;
    return 0;
}
