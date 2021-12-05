#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 150010
#define inf 1e18
#define mod 100000007

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int solve(int arr[],int n){
    int counter = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                counter++;
                break;
            }
        }
    }
    return counter;
}
int efficient(int a[],int n){
    int i;
    int count = 0, mn = a[n - 1];
    for(i = n - 2; i >= 0; i--)
    {
        if(a[i] > mn)
            count++;

        mn = min(a[i], mn);
    }
    return count;
    
}
int main(int argc, char const *argv[]){
    
    int test_case;
    
    cin>>test_case;
    int res[test_case];
    
    for(int i=0;i<test_case;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr[j] = x; 
        }
        //res[i] = solve(arr,n);
        res[i] = efficient(arr,n);
    }

    for(int i=0;i<test_case;i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
