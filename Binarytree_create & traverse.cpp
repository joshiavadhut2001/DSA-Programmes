// Binary Tree in C++

#include <stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    int Data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int Data)
{
    struct node (*node) =(struct node*)malloc(sizeof(struct node));
    node->Data=Data;
    node->left=NULL;
    node->right=NULL;
        return node;
}
void preordertraverse(struct node *temp)
{
    if(temp!= NULL){
    cout<<" " <<temp->Data;
    preordertraverse(temp->left);
    preordertraverse(temp->right);

    }
}

void inordertraverse(struct node *temp)
{
    if(temp!= NULL){

    preordertraverse(temp->left);
        cout<<" " <<temp->Data;
    preordertraverse(temp->right);

    }
}

void postordertraverse(struct node *temp)
{
    if(temp!= NULL){

    preordertraverse(temp->left);
    preordertraverse(temp->right);
    cout<<" " <<temp->Data;

    }
}










int main(){

    struct node *root= newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left =newnode(4);

  cout << "preorder traversal: ";
  preordertraverse(root);
  cout << "\nInorder traversal: ";
  inordertraverse(root);
  cout << "\nPostorder traversal: ";
  postordertraverse(root);







return 0;
}
