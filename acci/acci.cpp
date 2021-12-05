#include<bits/stdc++.h>

using namespace std;

int countAndMerge(int arr[], int l, int m, int r){
    int n1=m-l+1, n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            arr[k++]=left[i++];
            i++;
            }
        else{
            arr[k++]=right[j++];
            j++;
            res=res+(n1-i);
        }
        k++;
    }
    
    while(i<n1)
         arr[k++]=left[i++];
    while(j<n2)
         arr[k++]=right[j++];
    
    return res;

}
long countInversions(vector<int> arr) {
    int res = 0;
    int r = arr.size()-1;
    int l = 0;
    if (l<r) {
       
        int m = (r + l) / 2;
 
        res += countInversions(arr);
        res += countInversions(arr);
        res += countInversions(arr);
    }
    return res;
}

int main(int argc, char const *argv[]){

   
}

    return 0;
    
}
 