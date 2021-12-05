#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    } 
};
 

void buildParentMap(TreeNode *root,TreeNode *parent,map<TreeNode*,TreeNode*> parentsMap){
    if(!root)
        return;
    parentsMap[root] = parent;
    for(auto x:parentsMap){
        cout<<x.first->val<<" : "<<x.second->val<<endl;
    }
    buildParentMap(root->left,root,parentsMap); 
    buildParentMap(root->right,root,parentsMap);
} 
vector<int> buildListFromQueue(queue<TreeNode*> q1){
    vector<int> lst;
    while(q1.size()>0){
        lst.push_back(q1.front()->val);
        q1.pop();
    }
    
    
    return lst;
}
vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
    vector<int> res;
    map<TreeNode*,TreeNode*> parentsMap;
    buildParentMap(root,root,parentsMap);
    unordered_set<TreeNode*> visited; 
    queue<TreeNode*> q1;
    q1.push(target); 
    visited.insert(target);
    int level = 0; 
    while(q1.size()>0){
        int size = q1.size();
      
        if(level == K) {
            return buildListFromQueue(q1);
        }
        for(int i = 0;i<size;i++){
            TreeNode *t = q1.front();
            //cout<<t->val<<" ";
            q1.pop();
        }
        //     if(t->left  && !visited.count(t->left)){
        //         q1.push(t->left);
        //         visited.insert(t->left);
        //     }
        //     if(t->right && !visited.count(t->right)){
        //         q1.push(t->right);
        //         visited.insert(t->right);
        //     }
        //     TreeNode *parent = parentsMap[t];
        //     if(!visited.count(parent)){ 
        //         q1.push(parent);
        //         visited.insert(parent);
        //     }
        // }
        level++; 
    }
    return res;
}

int main(int argc, char const *argv[])
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    TreeNode *target = root->left;
    int k = 2;
    vector<int> res = distanceK(root,target,k);
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
