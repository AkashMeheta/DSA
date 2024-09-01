#include<bits/stdc++.h>
using namespace std;

struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;  
};

Tree* CreateNode(int data){
    Tree* newnode = new Tree();
    newnode->data = data;
    newnode->left = nullptr;
    newnode->right = nullptr;
}

void inorder_traversal(Tree* root){
    if(root == nullptr){
        return;
    }else{
        inorder_traversal(root->left);
        cout<<root->data<<"->";
        inorder_traversal(root->right);
    }
}
void preorder_traversal(Tree* root){
    if(root == nullptr){
       return;
    }else{
        cout<<root->data<<"->";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}
void postorder_traversal(Tree* root){
    if(root == nullptr){
        return;
    }else{
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout<<root->data<<"->";
    }
}

void BFS(Tree* root){
    if(root == nullptr) return;
    queue<Tree*> q;
    q.push(root);

    while(!q.empty()){
        Tree* node = q.front();
        q.pop();
        cout<<node->data<<"->";
        if(node->left != nullptr) q.push(node->left);
        if(node->right != nullptr) q.push(node->right);
    }
}


Tree* insertion(Tree* root, int data){
    if(root == nullptr){
        root = CreateNode(data);
        return root;
    }

    queue<Tree*> q;
    q.push(root);

    while(!q.empty()){
        Tree* node = q.front();
        q.pop();

        if(node->left != nullptr){
            q.push(node->left);
        }else{
            node->left = CreateNode(data);
            return root;
        }

        if(node->right != nullptr){
            q.push(node->right);
        }else{
            node->right = CreateNode(data);
            return root;
        }
    }
}

int main(){
    Tree* root = CreateNode(1);
    
    root->left = CreateNode(2);
    root->right = CreateNode(3);

    root->right->right = CreateNode(4);
    root->right->right->right = CreateNode(5);
    // cout << "In-order DFS before insertion: ";
    // inorder_traversal(root);
    // int data = 10;
    // root = insertion(root, data);

    cout << "In-order DFS: ";
    inorder_traversal(root);

    cout << "\nPre-order DFS: ";
    preorder_traversal(root);
   
    cout << "\nPost-order DFS: ";
    postorder_traversal(root);

    cout << "\nLevel order: ";
    BFS(root);
    return 0;
}