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
    //*create parent Node
    Node *root=new Node();
    root->data=10;
    root->left=nullptr;
    root->right=nullptr;
    
    //create child Node      
    Node *n1=new Node(); //! root->left = new Node(); you can also directly assign the node
    n1->data=5;             //* or after declaring  use root->left=n2;
    n1->left=nullptr;
    n1->right=nullptr;

    root->left=n1; //! connect it as left child of root


    Node *n2=new Node();//* this is better way because we can use n2 later if needed
    n2->data=20;
    n2->left=nullptr;
    n2->right=nullptr;

    root->right=n2;


    //now print them
    cout<<"root data: "<<root->data<<endl;
    cout<<"child1 data: "<<n1->data<<" "<<root->left->data<<endl;
    cout<<"child2 data: "<<n2->data<<" "<<root->right->data<<endl;


    inorder(root); //todo it should print reft>root>right order as it is inorder traversal.
    
    //!as you created memory in heap you should delete it as well
    delete root->left;
    delete root->right;
    delete root;

}   