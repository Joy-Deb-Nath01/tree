#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
void preorder(Node *root)
{
    if(root==nullptr)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

    Node *n2=new Node();
    n2->data=20;
    n2->left=nullptr;
    n2->right=nullptr;
    root->right=n2;


    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<" "<<endl;
    preorder(root);
}