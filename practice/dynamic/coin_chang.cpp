#include<iostream>

using namespace std;
//Coin Change Count


int get_coin(int coin[],int sum,int n){
    if(sum == 0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int res = get_coin(coin,sum,n-1);
    if (coin[n-1]<=sum){
        res = res + get_coin(coin,sum-coin[n-1],n);
    }
    return res;
}

int dp_getcoin(int coin[],int sum,int n){
    int table[sum+1][n+1];

    for(int i=0;i<=n;i++){
        table[0][i] = 1;
    }
    
    for(int i=0;i<=sum;i++){
        table[i][0] = 0;
    }

    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;j++){
            table[i][j] = table[i][j-1];
            if(coin[j-1]<=i){
                table[i][j] += table[i-coin[j-1]][j];
            }
    }
    }
    return table[sum][n];
}

int main(int argc, char const *argv[])
{
    int coin[] = {1,2,3};
    int n=3,sum=3;
    cout<<get_coin(coin,sum,n)<<" ";
    cout<<dp_getcoin(coin,sum,n);
    return 0;
}
