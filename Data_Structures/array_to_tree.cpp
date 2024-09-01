#include<bits/stdc++.h>
using namespace std;

struct tree{
    int data;
    struct tree* left;
    struct tree* right;
};

tree* createnode(int data){
    tree* newnode = new tree();
    newnode->data = data;
    newnode->left=nullptr;
    newnode->right=nullptr;
}


tree* array_to_tree(vector<int> nums){
    if(nums.size() == 0){
        return nullptr;
    }
    tree* root = createnode(nums[0]);

    queue<tree*> q;
    q.push(root);
    int i=1;
    while(i<nums.size()){
        tree* node = q.front();
        q.pop();

        if(i<nums.size()){
            node->left = createnode(nums[i++]);
            q.push(node->left);
        }
        if(i<nums.size()){
            node->right = createnode(nums[i++]);
            q.push(node->right);
        }
    }
    return root;
}

void printTree(tree* root){
    if(root == nullptr){
        return;
    }
    queue<tree*> q;
    q.push(root);

    while(!q.empty()){
        tree* node = q.front();
        q.pop();
        cout<<node->data<<"->";
        if(node->left != nullptr){
            q.push(node->left);
        }
        if(node->right != nullptr){
            q.push(node->right);
        }
    }
    
    
}

int main() {
    vector<int> nums = { 4,10,3,5,1 };
    tree* root = array_to_tree(nums);
    printTree(root);
    return 0;
}