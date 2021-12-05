#include<iostream>

using namespace std;


int o1kp(int weight[],int profit[],int m,int n){
    if(m==0||n==0){
        return 0;
    }
    else if(weight[n-1]>m){
        return o1kp(weight,profit,m,n-1);
    }
    else{
        int a = o1kp(weight,profit,m-weight[n-1],n-1) + profit[n-1];
        int b =  o1kp(weight,profit,m,n-1);
        return max(a,b);
    }


}
int dp_o1kp(int weight[],int profit[],int m,int n){
    int table[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if (i==0||j==0){
                table[i][j] = 0;
            }
            else if(weight[j-1]>i){
                table[i][j] = table[i][j-1];
            }
            else{
                table[i][j] = max(table[i-weight[j-1]][j-1] + profit[j-1],table[i][j-1]);
            }
    }
    }
      return table[m][n];
}


int main(int argc, char const *argv[])
{

    int m=15,n=5;
    
    int p[] = {50,70,60,75,55};
    int w[] = {5,3,4,2,4};
    cout<<o1kp(w,p,m,n);
    cout<<dp_o1kp(w,p,m,n);
    return 0;
}
