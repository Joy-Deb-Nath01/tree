#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node *left=nullptr;
    Node *right=nullptr;
};
void levelOrder(Node *root)
{
    if(root==nullptr)return;
    queue <Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node *cur=q.front();
        cout<<cur->data<<" ";
        q.pop();
        if(cur->left!=nullptr)q.push(cur->left);
        if(cur->right!=nullptr)q.push(cur->right);
    }
}
int main()
{
    Node *root=new Node();
    root->data=5;
    root->left=nullptr;
    root->right=nullptr;
    
    Node *n1=new Node();
    n1->data=10;
    n1->left=nullptr;
    n1->right=nullptr;
    root->left=n1;

    root->right=new Node();
    root->right->data=20;
    root->right->left=nullptr;
    root->right->right=nullptr;

    levelOrder(root);
    delete root->left;
    delete root->right;
    delete root;
}