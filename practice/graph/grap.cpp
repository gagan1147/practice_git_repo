#include<iostream>
#include<vector>
#include<queue>

using namespace std;


const int V = 4;
void add(vector<int> adj[],int u,int V){
    adj[u].push_back(V);
}

void dfsrec(bool visited[],vector<int> adj[],int source){
    visited[source] = true;
    cout<<source<<" ";
    for(int x:adj[source]){
        if(!visited[x]){
            dfsrec(visited,adj,x);
        }
    }
}


void dfs(vector<int> adj[],int V,int source){
    bool visited[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    dfsrec(visited,adj,source); 
}

void bfs(vector<int> adj[],int V,int source){

    bool visited[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    queue<int> q1;
    q1.push(source);
    visited[source] = true;
    while (!q1.empty()){
        cout<<q1.front()<<" ";
        int u = q1.front();
        q1.pop();
        for(int x:adj[u]){
            if(!visited[x]){
                visited[x] = true;
                q1.push(x);
            }
        }
    }
}

int prims(int graph[V][V],int V){
    bool mset[V];
    int key[V],res = 0;
    
    for(int i=0;i<V;i++){
        mset[i] = false;
        key[i] = INT16_MAX;
    }
    key[0] = 0;
    for(int count=0;count<V;count++){
        int u = -1;
        for(int i=0;i<V;i++){
            if (!mset[i] &&( u==-1 || key[i]<key[u])){
                u=i;
            }
        }
        mset[u] = true;
        res = res + key[u];
        for(int i = 0;i<V;i++){
            if(graph[u][i]!=0 && !mset[i]){
                key[i] = min(key[i],graph[u][i]);
            }
        }
    }
    return res;
  
}

int main(){
 
    vector<int> adj[V];
    add(adj,0,1);
    add(adj,0,2);
    add(adj,1,2);
    add(adj,2,3);
    bfs(adj,V,0);
    dfs(adj,V,0);
    int graph[V][V] = {{0,5,8,INT16_MAX},{5,0,10,15},{8,10,0,20},{INT16_MAX,15,20,0}};
    cout<<prims(graph,V);
}