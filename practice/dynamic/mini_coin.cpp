//Minimum coin for value

#include<iostream>

using namespace std;


int get_coin(int coin[],int val,int n){
    if(val==0){
        return 0;
    }
    int res = INT16_MAX; 
    for(int i=0;i<n;i++){
        
        if (coin[i]<=val){
            int sub_res = get_coin(coin,val-coin[i],n);
            if(sub_res != INT16_MAX){
                res =min(res,sub_res+1);   
            }
        }
    }
    return res;
}



int main(){
    int coin[] = {25,10,5},n=3,val=30;
    cout<<get_coin(coin,val,n);
}