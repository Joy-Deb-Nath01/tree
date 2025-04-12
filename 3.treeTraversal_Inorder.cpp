#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
void inorder(Node *root)
{
    if(root==nullptr)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{

}