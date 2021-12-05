#include<bits/stdc++.h>

using namespace std;

struct trienode{
    struct trienode *child[26];
    bool isEnd;
    int size;
    trienode(){
        isEnd = false;
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
        size = 0;
    }
};

struct trienode *insert_node(struct trienode *root,string key){
    struct trienode *curr = root;
    // if(!curr){
    //     return;
    // }
    for(int i=0;i<key.length();i++){
        int index = key[i] - 'a';
        if(!curr->child[index]){
            curr->child[index] = new trienode();
        }
        curr = curr->child[index];  
        curr->size++;  
    }
    curr->isEnd = true;
    return root;
    
}

int search_node(struct trienode *root,string key){
    struct trienode *curr = root;
    if(!curr){
        return 0;
    }
    int i;
    for(i=0;i<key.length();i++){
        int index = key[i]-'a';
        if(!curr->child[index]){
            return 0;
        }
        curr = curr->child[index];
    }
    return curr->size;
}


int main(int argc, char const *argv[]){
    
    struct trienode *root = new trienode();
    vector<int> res;
    //vector<vector<string>> temp = {{"add hack"}, {"add hackerrank"}, {"find hac"}, {"find hak"}};
    vector<vector<string>> temp = {{"add ed"},{"add eddie"},{"add edward"},{"find ed"},{"add edwina"},{"find edw"},{"find a"}};
    // int test_case;
    // cin>>test_case;
    // vector<vector<string>> temp;
    // for(int i=0;i<test_case;i++){
    //     vector<string> temp_inside;
    //     string query;
    //     getline(cin,query);
    //     temp_inside.push_back(query);
    //     temp.push_back(temp_inside);
    // }

    //  for(auto x:temp){
    //     for(auto y:x){
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }
    
    
    vector<struct trienode*> root_tree;
    for(auto x:temp){
        string query = "";
        int insert=0,find=0;
        for(auto y:x){
            if(y[0] == 'a'){
                insert = 1;
                find = 0;
            }
            else if(y[0] == 'f'){
                insert = 0;
                find = 1;
            }
            
            if(insert){
                for(int i=4;i<y.length();i++){
                    query = query + y[i];
                }
                //struct trienode *root_temp = new trienode();
                root = insert_node(root,query);
                //root_tree.push_back(root_temp);
            }
            if(find){
                for(int i=5;i<y.length();i++){
                    query = query + y[i];
                }
                // int count  = 0;
                // for(auto tree:root_tree){
                //     if(search_node(tree,query)){
                //         count++;
                //     }
                // }
                res.push_back(search_node(root,query));
            }
            //cout<<query;
        }
        //cout<<endl;
    }
    
    
    // insert_node(root,"hack");
    // insert_node(root,"hackerrank");
    // cout<<search_node(root,"hac");
    // cout<<search_node(root,"hak");
    // cout<<endl;
    for(int x:res){
        cout<<x<<endl;
    }
    
    return 0;
}
