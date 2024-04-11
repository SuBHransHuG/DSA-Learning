#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
public:
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int heightOfTree(node* root){
    if(root == NULL)
        return 0;
    else{
        int leftDepth = heightOfTree(root->left);
        int rightDepth = heightOfTree(root->right);

        if(leftDepth>rightDepth)
            return (leftDepth+1);
        else
            return (rightDepth+1);
        
    }
}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    cout<<"Height of BST is "<<heightOfTree(root)<<endl;

return 0;
}
